@class AWECommentLynxEggModel, NSString, AWECodeGenToolTipInfoModel, AWEURLModel, AWECommentLiteInspireInfoModel, AWECommentSurpriseEggModel, AWECommentModel, AWECommentUserGuideInfoModel, AWECommentIntentionComponentModel, AWECodeGenFunctionBanPopupModel;

@interface AWEPostCommentResponse : AWEBaseApiModel

@property (retain, nonatomic) AWECommentModel *comment;
@property (copy, nonatomic) NSString *labelInfo;
@property (copy, nonatomic) NSString *verifyType;
@property (retain, nonatomic) AWECommentSurpriseEggModel *commentEasterEgg;
@property (retain, nonatomic) AWECommentLynxEggModel *commentLynxEgg;
@property (retain, nonatomic) AWECommentUserGuideInfoModel *commentUserGuideInfo;
@property (retain, nonatomic) AWECommentIntentionComponentModel *commentIntentionalComponent;
@property (nonatomic) BOOL isPartSeeItem;
@property (nonatomic) BOOL commentMarked;
@property (retain, nonatomic) AWEURLModel *labelPrivate;
@property (retain, nonatomic) AWECommentLiteInspireInfoModel *liteCommentInspireInfo;
@property (nonatomic) long long publishRetryInterval;
@property (nonatomic) long long canRetryCode;
@property (retain, nonatomic) AWECodeGenFunctionBanPopupModel *popupConfig;
@property (nonatomic) BOOL canShowCommentInteractionGuide;
@property (retain, nonatomic) AWECodeGenToolTipInfoModel *toolTipInfo;
@property (copy, nonatomic) NSString *successToastMsg;
@property (nonatomic) long long toastType;
@property (nonatomic) long long leftQuota;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
