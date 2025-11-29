@class IESLiveInnerFeedLiveGuideCardItemModel, HTSLiveFeedDataApi, IESLiveInnerFeedLiveGuideMessageCreator, IESLiveGCDTimer, NSString, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedLiveGuideCardController : NSObject <IESLiveInnerFeedDataControlAction, IESLiveCommonSceneMessageAction, HTSLiveMessageSubscriber, IESLiveInnerFeedDisplayAction, IESLiveInnerFeedLiveGuideCardService>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveInnerFeedLiveGuideCardItemModel *guideItemModel;
@property (retain, nonatomic) IESLiveInnerFeedLiveGuideMessageCreator *messageCreator;
@property (retain, nonatomic) HTSLiveFeedDataApi *api;
@property (nonatomic) long long insertIndex;
@property (nonatomic) double autoSlideTime;
@property (nonatomic) BOOL disableInsert;
@property (nonatomic) long long duplicateFilterWindow;
@property (nonatomic) BOOL didMount;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showComponentWithPitayaMessage:(id)a0;
- (void)innerFeedWillBeginDragging:(id)a0;
- (void)innerFeedWillMountObject:(id)a0 atIndex:(long long)a1 currentIndex:(long long)a2;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedDataDidChangeWithType:(unsigned long long)a0 datas:(id)a1 hasMore:(BOOL)a2 success:(BOOL)a3;
- (void)innerFeedDidDeleteItems:(id)a0;
- (void)stopMessage;
- (void)removeToNextWithType:(long long)a0;
- (void)jumpToLiveTabWithRoomID:(id)a0 params:(id)a1;
- (void)trackEvent:(id)a0 feedItem:(id)a1 params:(id)a2;
- (void)trackLiveShowWithFeedItem:(id)a0;
- (void)prepareExit;
- (void)stopAutoTimer;
- (void)tryInsertGuideCard;
- (void)deleteGuideItem:(long long)a0;
- (BOOL)checkDuplicateRooms;
- (void)innerFeedDidUnMountObject:(id)a0 atIndex:(long long)a1;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)initWithContext:(id)a0;
- (void)request;
- (void)messageReceived:(id)a0;
- (BOOL)isValidResponse:(id)a0;
- (void)startMessage;
- (void)scrollToNext;

@end
