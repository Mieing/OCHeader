@class FinderLivePromoteMsgInfo, NSString, MMFinderLiveTaskId, UIView, MMFinderLivePromotePubbleCustomContentEndView, MMFinderLiveTask;
@protocol MMFinderLiveOperationViewDelegate;

@interface MMFinderLivePromotePubbleContentView : UIView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderLivePromoteMsgInfo *currentPromoteMsgInfo;
@property (nonatomic) unsigned long long promoteId;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long currentContentMode;
@property (retain, nonatomic) MMFinderLivePromotePubbleCustomContentEndView *customEndView;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (readonly, nonatomic) id currentPromoteItem;
@property (readonly, nonatomic) BOOL isCustomDisplaying;
@property (nonatomic) BOOL hasGetJumpInfo;
@property (nonatomic) BOOL isGettingJumpInfo;
@property (retain, nonatomic) NSString *useSuggestions;
@property (retain, nonatomic) NSString *customEndText;
@property (weak, nonatomic) id<MMFinderLiveOperationViewDelegate> operationDelegate;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ actionReportCallback;
@property (copy, nonatomic) id /* block */ firstFrameRenderredCompletion;

+ (id)createPromotePubbleContentWithPromoteMsgInfo:(id)a0 taskId:(id)a1;
+ (void)reportForPromoteActions:(id)a0 withLiveTask:(id)a1;

- (id)initWithPromoteMsgInfo:(id)a0 taskId:(id)a1;
- (void)layoutSubviews;
- (void)addGestures;
- (BOOL)disableTapGesture;
- (void)convertPromoteMsgInfo:(id)a0;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutCustomEndView;
- (void)resetGetJumpInfoTag;
- (void)requestJumpInfo:(id /* block */)a0;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (id)accessibilityValueString;
- (void)handleSingleTapGesture:(id)a0;
- (BOOL)isCurrentPromoteMsgInfo:(id)a0;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteMsgInfo:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)disMissSelf;
- (void)onClosed;
- (void)onShowed;
- (void)onDismissed;
- (void)onTapped;
- (void)displayContent:(unsigned long long)a0;
- (void)reportForExpose;
- (void)reportForClick;
- (id)createPromoteActionReportItem:(unsigned long long)a0;
- (void).cxx_destruct;

@end
