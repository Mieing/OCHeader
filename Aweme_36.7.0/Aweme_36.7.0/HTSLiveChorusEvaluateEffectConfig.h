@class HTSLiveImage;

@interface HTSLiveChorusEvaluateEffectConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *perfectIcon;
@property (nonatomic) BOOL hasPerfectIcon;
@property (retain, nonatomic) HTSLiveImage *goodIcon;
@property (nonatomic) BOOL hasGoodIcon;
@property (retain, nonatomic) HTSLiveImage *niceIcon;
@property (nonatomic) BOOL hasNiceIcon;

+ (id)descriptor;

@end
