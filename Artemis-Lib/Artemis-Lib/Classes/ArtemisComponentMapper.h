/**
 http://code.google.com/p/artemis-framework/source/browse/src/com/artemis/ComponentMapper.java
 */
#import <Foundation/Foundation.h>

@class ArtemisWorld, ArtemisComponentType, ArtemisEntity;

@interface ArtemisComponentMapper : NSObject

+(ArtemisComponentMapper*) componentMapperForType:(Class) componentClass inWorld:(ArtemisWorld*) world;

-(id) get:(ArtemisEntity*) entity;
-(id) getSafe:(ArtemisEntity*) entity;
-(BOOL) has:(ArtemisEntity*) entity;

@end
