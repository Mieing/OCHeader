@class NSMutableDictionary, NSMutableSet, AWEDCFeedPageContext, NSMutableArray;
@protocol AWESearchHomeDCFeedTrackControllerDelegate;

@interface AWESearchHomeDCFeedTrackController : NSObject

@property (retain, nonatomic) NSMutableSet *hasTrackedCellSet;
@property (retain, nonatomic) NSMutableDictionary *hasRealShownCellDic;
@property (retain, nonatomic) NSMutableDictionary *hasInvisibleCellDic;
@property (retain, nonatomic) NSMutableArray *hotItemIds;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) id<AWESearchHomeDCFeedTrackControllerDelegate> trackDelegate;
@property (nonatomic) long long todayColdLaunchTimes;
@property (nonatomic) long long newUserStage;

- (id)enterFrom;
- (void)trackEvent:(id)a0 withParams:(id)a1;
- (void)addNotification;
- (void)resetHasShown;
- (id)tokenTypeWithModel:(id)a0;
- (double)cellVisiblePercentInWindow:(id)a0;
- (void)trackDislikeWithType:(id)a0 awemeModel:(id)a1 indexPath:(id)a2;
- (void)trackFeedCardClickWithModel:(id)a0 indexPath:(id)a1;
- (id)getHotItemIds;
- (void)clearHottedItemIds;
- (void)trackLynxCardClick:(id)a0;
- (void)trackLynxCardClickWithAwemeId:(id)a0 extraParam:(id)a1;
- (void)trackFeedCardShowWithModel:(id)a0 indexPath:(id)a1;
- (void)trackLynxCardShowWithModel:(id)a0 indexPath:(id)a1;
- (id)getCardCommonParamsWithAwemeModel:(id)a0 indexPath:(id)a1;
- (void)addToHotItemListIfNeeded:(id)a0;
- (id)getCardCommonParamsWithLynxModel:(id)a0 indexPath:(id)a1;
- (void)trackItemShowWithViewModel:(id)a0;
- (void)trackLynxItemClickWithModel:(id)a0 indexPath:(id)a1 extraParam:(id)a2;
- (void)handleFeedCardRealShowDurationWithModel:(id)a0 indexPath:(id)a1 itemID:(id)a2 visible:(BOOL)a3;
- (void)trackInvisibleCellStayDuration;
- (void)trackClientStayTimeWithModel:(id)a0 indexPath:(id)a1 duration:(double)a2;
- (id)searchNewUserStage;
- (void)trackVisibleCellsOnAppear:(id)a0;
- (void)trackBeginSlideWithVisibleModels:(id)a0;
- (void)updateAndReportStayTime:(id)a0;
- (void)trackAllStayOnLeave;
- (void).cxx_destruct;
- (id)init;
- (long long)isLogin;

@end
