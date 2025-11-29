@class NSString, HTSLiveImage;

@interface HTSLiveEffectUtilImageInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *placeholderKey;
@property (retain, nonatomic) HTSLiveImage *mixImage;
@property (nonatomic) BOOL hasMixImage;

+ (id)descriptor;

@end
