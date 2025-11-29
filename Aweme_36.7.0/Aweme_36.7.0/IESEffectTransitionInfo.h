@interface IESEffectTransitionInfo : NSObject

@property (nonatomic) int rid;
@property (nonatomic) unsigned int textureID;
@property (nonatomic) void *rlTexture;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;

- (id)init;

@end
