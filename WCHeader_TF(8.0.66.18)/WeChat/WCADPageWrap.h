@class WCADShareInfo, WCAdCommonInteractionReportInfo, WCAdContinuousLikeReportInfo, WCAdFinderTopicReportInfo, WCADSphereReportInfo, WCAdClickQualityRelatedInfo, WCStatTimerHelper, WCAdLookbookCardReportInfo, WCAdFinderLiveStreamReportInfo, NSString, WCAdFireworkCheerReportInfo, WCAdExpParamsReportInfo, WCAdFullCardLongPressReportInfo, WCAdFlipCardReportInfo, WCAdFullCardDragImageReportInfo, WCAdSliderCardReportInfo, WCADVideoPlayInfo, WCAdBreakFrameReportInfo;

@interface WCADPageWrap : NSObject

@property (retain, nonatomic) NSString *adID;
@property (retain, nonatomic) NSString *publishID;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *commonUxInfo;
@property (nonatomic) unsigned int logType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) int subClickPos;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long clickTime;
@property (retain, nonatomic) WCADShareInfo *shareInfo;
@property (nonatomic) unsigned int adType;
@property (nonatomic) unsigned int clickActionType;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *snsStatExt;
@property (nonatomic) int canvasPageScene;
@property (retain, nonatomic) WCStatTimerHelper *timer;
@property (nonatomic) unsigned int flipStatus;
@property (nonatomic) unsigned long long exposureStartTime;
@property (retain, nonatomic) WCADSphereReportInfo *sphereInfo;
@property (retain, nonatomic) WCADVideoPlayInfo *playInfo;
@property (retain, nonatomic) WCAdFullCardLongPressReportInfo *longPressReportInfo;
@property (retain, nonatomic) WCAdFullCardDragImageReportInfo *dragImageReportInfo;
@property (retain, nonatomic) WCAdFinderTopicReportInfo *finderTopicReportInfo;
@property (retain, nonatomic) WCAdSliderCardReportInfo *sliderCardReportInfo;
@property (retain, nonatomic) WCAdBreakFrameReportInfo *breakFrameReportInfo;
@property (retain, nonatomic) WCAdFinderLiveStreamReportInfo *finderLiveStreamReportInfo;
@property (retain, nonatomic) WCAdLookbookCardReportInfo *lookbookCardReportInfo;
@property (retain, nonatomic) WCAdFlipCardReportInfo *flipCardReportInfo;
@property (retain, nonatomic) WCAdCommonInteractionReportInfo *commonInteractionReportInfo;
@property (nonatomic) double adContentHight;
@property (retain, nonatomic) WCAdContinuousLikeReportInfo *continuousLikeReportInfo;
@property (retain, nonatomic) WCAdFireworkCheerReportInfo *fireworkCheerReportInfo;
@property (retain, nonatomic) WCAdExpParamsReportInfo *expParamsInfo;
@property (retain, nonatomic) WCAdClickQualityRelatedInfo *clickQualityInfo;
@property (nonatomic) unsigned long long asyncAvatarInfoStatus;
@property (nonatomic) unsigned long long videoPlayBackTime;
@property (retain, nonatomic) NSString *miniShopRequestId;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
