@class AWEURLModel, NSString, AWEUserProfilePostContributionGuideClientControl, AWECodeGenStyleConfigModel, AWECodeGenCoverConfigModel, AWEUserProfileSpecificationTipActionSheetInfo;

@interface AWEUserProfileSpecificationPostContributionGuideTip : AWEUserProfileSpecificationTip

@property (nonatomic) long long guideID;
@property (copy, nonatomic) NSString *guideType;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *titleContent;
@property (copy, nonatomic) NSString *subTitleContent;
@property (retain, nonatomic) AWEURLModel *backgroundPicture;
@property (copy, nonatomic) NSString *hotJumpURL;
@property (copy, nonatomic) NSString *mobParams;
@property (copy, nonatomic) NSString *lightSubtitleRichText;
@property (retain, nonatomic) AWEURLModel *darkIcon;
@property (copy, nonatomic) NSString *darkSubtitleRichText;
@property (nonatomic) unsigned long long buttonActionType;
@property (retain, nonatomic) AWEUserProfileSpecificationTipActionSheetInfo *actionSheetInfo;
@property (nonatomic) BOOL isTrackedShown;
@property (retain, nonatomic) AWEUserProfilePostContributionGuideClientControl *clientControl;
@property (copy, nonatomic) NSString *transparentTransmissionData;
@property (nonatomic) BOOL hitExitOptimize;
@property (retain, nonatomic) AWECodeGenStyleConfigModel *styleConfig;
@property (retain, nonatomic) AWECodeGenCoverConfigModel *coverConfig;

+ (id)clientControlJSONTransformer;
+ (id)backGroundPictureLightJSONTransformer;
+ (id)backGroundPictureDarkJSONTransformer;
+ (id)actionSheetInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)subtitlePureText;
- (id)actionCustomerTaskInfoWith:(long long)a0;
- (id)actionTaskInfoWithType:(long long)a0 pushTime:(long long)a1 cacheInfo:(id)a2;
- (void).cxx_destruct;

@end
