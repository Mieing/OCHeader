@class NSString, NSDictionary, AWEHotSearchPublishEffectModel, NSNumber, AWECodeGenChallengeTemplateModel;

@interface AWEHotSearchBottomBarConfigButtonInfo : AWEBaseApiModel

@property (nonatomic) BOOL isShowBar;
@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) NSString *buttonCopywriting;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *doujuId;
@property (copy, nonatomic) NSString *hotspotInfo;
@property (retain, nonatomic) NSNumber *buttonBgType;
@property (retain, nonatomic) AWEHotSearchPublishEffectModel *effect;
@property (retain, nonatomic) AWECodeGenChallengeTemplateModel *ugcTemplate;
@property (retain, nonatomic) NSDictionary *clickTrackParams;
@property (retain, nonatomic) NSNumber *interactionStyle;
@property (copy, nonatomic) NSString *logParams;
@property (copy, nonatomic) NSDictionary *shootMobExtras;
@property (copy, nonatomic) NSDictionary *ugcLogParams;
@property (retain, nonatomic) NSNumber *publishTypeForce;

+ (id)effectJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
