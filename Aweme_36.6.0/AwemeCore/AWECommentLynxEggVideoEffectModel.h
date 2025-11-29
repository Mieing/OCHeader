@class NSString, AWECommentLynxEggDefaultInputConfig, AWECommentLynxEggImageCommentSurpriseConfig;

@interface AWECommentLynxEggVideoEffectModel : AWEBaseApiModel

@property (nonatomic) unsigned long long effectID;
@property (copy, nonatomic) NSString *videoSrc;
@property (nonatomic) BOOL isLoop;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) BOOL isAutoplay;
@property (nonatomic) unsigned long long videoHeight;
@property (nonatomic) unsigned long long videoWidth;
@property (nonatomic) unsigned long long effectType;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *surpriseType;
@property (retain, nonatomic) AWECommentLynxEggDefaultInputConfig *defaultInputConfig;
@property (retain, nonatomic) AWECommentLynxEggImageCommentSurpriseConfig *imageCommentSurpriseConfig;

+ (id)defaultInputConfigJSONTransformer;
+ (id)imageCommentSurpriseConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
