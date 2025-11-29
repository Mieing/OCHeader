@class NSDate, NSTimer, NSMutableDictionary, IESLiveMessageListPinnedView, NSDictionary, NSMutableArray, HTSLiveMessageListNode, IESLivePSComponentConfigModel;
@protocol IESLiveRoomService;

@interface IESLiveMessageListPinManager : NSObject

@property (retain, nonatomic) NSMutableArray *waitPinNodes;
@property (retain, nonatomic) HTSLiveMessageListNode *currentPinNode;
@property (retain, nonatomic) IESLivePSComponentConfigModel *currentPinConfigModel;
@property (retain, nonatomic) IESLiveMessageListPinnedView *currentPinnedView;
@property (retain, nonatomic) NSTimer *pinTimer;
@property (retain, nonatomic) NSDictionary *pinViewMaps;
@property (retain, nonatomic) NSDate *timerPauseStartDate;
@property (retain, nonatomic) NSDate *timerPreviousFireDate;
@property (nonatomic) BOOL pausePin;
@property (retain, nonatomic) NSMutableDictionary *pinnedViewShowDurationDict;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) id /* block */ addMessageToDeleteBlock;
@property (copy, nonatomic) id /* block */ addMessageToShowBlock;
@property (copy, nonatomic) id /* block */ nodeDidPin;

- (void)cancelPinNodeWhenDisplayTimeEnd:(id)a0;
- (void)p_showPinnedViewWith:(id)a0;
- (void)p_setupPinnedViewTimerWithNode:(id)a0;
- (void)cancelPinNode:(id)a0;
- (double)calculatePinTime:(id)a0;
- (void)pausePinTimer;
- (id)fetchPinnedViewWith:(id)a0;
- (void)nodeDidPinned:(id)a0;
- (double)accumulatePinnedViewShowDuration:(id)a0;
- (void)resumePinTimer;
- (void)tr_trackPublicHoverMessageShowWithNode:(id)a0;
- (void)commitPreparePinNode:(id)a0;
- (void)commitPinNode:(id)a0;
- (void)reloadPinTimesWithNode:(id)a0;
- (BOOL)containPinMessage:(id)a0;
- (BOOL)containsKindOfMessage:(id /* block */)a0;
- (BOOL)isPinningMessage:(id)a0;
- (BOOL)isPinningNode:(id)a0;
- (void)resumeCurrentPin;
- (void)pauseCurrentPin;
- (id)pinningNode;
- (void)refreshCurrentPinLayoutWithNode:(id)a0;
- (void)rePinCurrentPinViewWithWidth:(double)a0;
- (void)trackPinnedViewShowDuration;
- (void).cxx_destruct;
- (id)init;

@end
