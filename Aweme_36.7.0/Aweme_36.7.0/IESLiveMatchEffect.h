@class HTSLiveImage;

@interface IESLiveMatchEffect : IESLivePBBaseMessage

@property (nonatomic) BOOL showEffect;
@property (retain, nonatomic) HTSLiveImage *effectResource;
@property (nonatomic) BOOL hasEffectResource;

+ (id)descriptor;

@end
