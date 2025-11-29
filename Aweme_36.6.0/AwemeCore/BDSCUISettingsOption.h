@class NSString, NSMutableDictionary, NSArray, NSDictionary, BDSCResearchCardConfig;

@interface BDSCUISettingsOption : NSObject

@property (retain, nonatomic) NSMutableDictionary *sceneConfigDict;
@property (copy, nonatomic) NSString *guidePageSchema;
@property (copy, nonatomic) NSString *guidePageSchemaV2;
@property (copy, nonatomic) NSString *guidePageSchemaV2Light;
@property (copy, nonatomic) NSString *helpPageSchema;
@property (copy, nonatomic) NSString *helpPageSchemaV2;
@property (copy, nonatomic) NSString *helpPageSchemaV2Light;
@property (copy, nonatomic) NSString *feedBackPageSchema;
@property (copy, nonatomic) NSString *feedBackPageSchemaV2;
@property (copy, nonatomic) NSString *feedBackPageSchemaV2Light;
@property (copy, nonatomic) NSString *searchFailReasonSchema;
@property (copy, nonatomic) NSString *searchFeedBackPageSchemaV2;
@property (copy, nonatomic) NSString *searchFeedBackPageSchemaV2Light;
@property (copy, nonatomic) NSString *xsgLabelText;
@property (copy, nonatomic) NSString *xsgLabelColor;
@property (copy, nonatomic) NSString *defaultDeviceHeadTitle;
@property (copy, nonatomic) NSArray *floatBallForbiddenVCList;
@property (copy, nonatomic) NSArray *floatBallStackForbiddenVCList;
@property (nonatomic) unsigned long long searchType;
@property (nonatomic) BOOL floatBallEnable;
@property (copy, nonatomic) NSArray *shouldShowVCList;
@property (nonatomic) BOOL isCloudGuideOpened;
@property (nonatomic) double overTimeInWifi;
@property (nonatomic) double overTimeInMobile;
@property (nonatomic) double stopLoadingDelayTime;
@property (nonatomic) double delayResearchTime;
@property (nonatomic) BOOL globalMemoryFoldModeEnable;
@property (nonatomic) BOOL newVideoSearchPanel;
@property (copy, nonatomic) NSArray *blackDeviceList;
@property (copy, nonatomic) NSString *xsgGuideCoverImageURLString;
@property (copy, nonatomic) NSString *xsgGuideVideoURLString;
@property (copy, nonatomic) NSDictionary *clarityAlertConfig;
@property (copy, nonatomic) NSDictionary *clarityAlertConfigWhite;
@property (retain, nonatomic) BDSCResearchCardConfig *defaultResearchCardConfig;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)modelWithDictionary:(id)a0;

- (id)sceneConfigForSceneID:(id)a0;
- (void).cxx_destruct;

@end
