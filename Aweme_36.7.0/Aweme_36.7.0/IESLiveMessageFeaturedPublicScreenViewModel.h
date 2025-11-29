@class HTSEventContext, NSString, IESLiveMessageFeaturedDataHandler;
@protocol IESLiveMessageFeaturedPublicScreenReaction;

@interface IESLiveMessageFeaturedPublicScreenViewModel : IESLivePublicScreenViewModel <IESLivePublicScreenEventObserver, IESLiveRoomWatchTimeDelegate>

@property (nonatomic) double lastContentOffsetY;
@property (nonatomic) BOOL didCommitRefreshData;
@property (nonatomic) BOOL clickActionOptimize;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long startTimes;
@property (nonatomic) long long featuredGiftMessageCount;
@property (nonatomic) long long featuredCommentMessageCount;
@property (nonatomic) long long featuredBarrageMessageCount;
@property (nonatomic) double autoScrollDelay;
@property (nonatomic) long long mode;
@property (nonatomic) long long role;
@property (nonatomic) BOOL enableAutoScroll;
@property (retain, nonatomic) IESLiveMessageFeaturedDataHandler *dataHandler;
@property (weak, nonatomic) id<IESLiveMessageFeaturedPublicScreenReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchCellWithPoint:(struct CGPoint { double x0; double x1; })a0 node:(id)a1 cell:(id)a2;
- (void)longPressCellView:(id)a0 node:(id)a1;
- (void)didNodeDisplayOnce:(id)a0;
- (void)liveRoomWatchMinitTick:(unsigned long long)a0;
- (id)nodeStyleConfig;
- (void)nativeGiftEndWith:(id)a0;
- (id)dataFlowConfig;
- (void)commitData:(id)a0;
- (void)setupPublicScreenViewModel;
- (double)fontSizeWithType:(unsigned long long)a0;
- (void)removeBufferWithMaxCount:(long long)a0;
- (void)updateConfigWithMode:(long long)a0 role:(long long)a1;
- (void)removeBuffersData;
- (void)updateFontSizeType:(unsigned long long)a0;
- (void)trackFeaturedMessageDisplayOnScreen;
- (id)msgShowAreaString;
- (void)dataDisplayOnMessageFeatured:(id)a0;
- (void)pauseTableViewUpdateWithReason:(id)a0;
- (void)startTableViewUpdate;
- (BOOL)isAIGuideMessage:(id)a0;
- (void)trackAIGuideMessageShow;
- (void)publicScreen:(id)a0 refreshConfigChanged:(id)a1;
- (void)touchListView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)dealloc;

@end
