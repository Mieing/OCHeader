@class HTSLiveTrayPostEffect, NSString, HTSLiveImage, NSNumber;

@interface IESLiveGiftTrayInfo : IESLiveDynamicModel

@property (retain, nonatomic) HTSLiveImage *baseImage;
@property (retain, nonatomic) HTSLiveImage *headImage;
@property (retain, nonatomic) HTSLiveImage *rightImage;
@property (retain, nonatomic) HTSLiveImage *dynamicImage;
@property (retain, nonatomic) NSNumber *trayLevel;
@property (copy, nonatomic) NSString *traySchemaUrl;
@property (nonatomic) long long trayType;
@property (retain, nonatomic) HTSLiveImage *baseImageV2;
@property (retain, nonatomic) HTSLiveImage *rightImageV2;
@property (nonatomic) BOOL useHighLayer;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long traySlideRate;
@property (retain, nonatomic) HTSLiveImage *preEffectImg;
@property (nonatomic) long long trayStartTime;
@property (retain, nonatomic) HTSLiveImage *trayRipple;
@property (copy, nonatomic) NSString *preSchema;
@property (nonatomic) long long preDuration;
@property (nonatomic) int preEffectSource;
@property (copy, nonatomic) NSString *preEffectExtra;
@property (retain, nonatomic) HTSLiveTrayPostEffect *postEffect;
@property (nonatomic) int trayGroupMode;

- (void).cxx_destruct;

@end
