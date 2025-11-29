@class NSString, HTSLiveImage;

@interface HTSLiveEffectImageInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *placeholderKey;
@property (retain, nonatomic) HTSLiveImage *mixImage;
@property (nonatomic) BOOL hasMixImage;

+ (id)descriptor;

@end
