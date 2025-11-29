@class WCAdBreakFrameReportInfo, WCAdContinuousLikeReportInfo, WCAdFinderTopicReportInfo, WCADSphereReportInfo, WCAdClickQualityRelatedInfo, WCAdLookbookCardReportInfo, WCAdFinderLiveStreamReportInfo, NSString, AdExposureTimerHelper, WCAdFireworkCheerReportInfo, WCAdExpParamsReportInfo, WCAdFullCardLongPressReportInfo, WCAdFullCardDragImageReportInfo, WCAdFlipCardReportInfo, WCAdSliderCardReportInfo, WCADVideoPlayInfo, WCAdCommonInteractionReportInfo;

@interface WCADBodyWrap : NSObject

@property (retain, nonatomic) AdExposureTimerHelper *adHalfExposureTimer;
@property (retain, nonatomic) AdExposureTimerHelper *adFullExposureTimer;
@property (retain, nonatomic) NSString *adID;
@property (retain, nonatomic) NSString *publishID;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned int startPositionType;
@property (nonatomic) unsigned int endPositionType;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long halfStartTime;
@property (nonatomic) unsigned long long halfEndTime;
@property (nonatomic) unsigned long long allStartTime;
@property (nonatomic) unsigned long long allEndTime;
@property (nonatomic) double readHeight;
@property (nonatomic) double unReadTopHeight;
@property (nonatomic) double unReadBottomHeight;
@property (nonatomic) double tableContentY;
@property (retain, nonatomic) WCADVideoPlayInfo *playInfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *snsStatExt;
@property (nonatomic) unsigned long long adDisappearTime;
@property (nonatomic) unsigned long long adDisappearDuration;
@property (nonatomic) BOOL isFulllyAppearing;
@property (nonatomic) unsigned long long adFullExposeDisappearTime;
@property (nonatomic) unsigned long long adFullExposeDisappearDuration;
@property (retain, nonatomic) WCADSphereReportInfo *sphereInfo;
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
@property (retain, nonatomic) NSString *adInfoAddress;
@property (retain, nonatomic) NSString *cacheKey;

- (id)init;
- (id)fetchTimerHelper:(BOOL)a0;
- (void)startExposureTimeRecord:(BOOL)a0;
- (void)stopExposureTimeRecord:(BOOL)a0;
- (void)beginAdFeedDisappear:(BOOL)a0;
- (void)endAdFeedDisappear:(BOOL)a0;
- (unsigned long long)fetchExposureTime:(BOOL)a0;
- (void)resetExposureTimer;
- (void).cxx_destruct;

@end
