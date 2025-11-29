@class NSArray, UITapGestureRecognizer, NSString;

@interface MMFinderLiveCommentContentView : MMFinderLiveCommentBaseContentView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSArray *redDotList;
@property (nonatomic) unsigned long long startDisplayTime;
@property (weak, nonatomic) UITapGestureRecognizer *commentTableTapGesRecognizer;
@property (nonatomic) double previousNotifyAreaHeight;
@property (copy, nonatomic) id /* block */ getIsShowingInputViewCallback;
@property (copy, nonatomic) id /* block */ getIsEnableChangeContentStateCallback;
@property (copy, nonatomic) id /* block */ getEnableShowContentTabBarCallback;
@property (copy, nonatomic) id /* block */ onNotifyAreaHeightChangedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)commentTableWidth:(id)a0;
+ (double)commentTableWidthPortrait:(id)a0;
+ (double)commentTableWidthLandScape:(id)a0;
+ (double)currentCommentTableWidth:(id)a0;

- (BOOL)getEnableShowContentTabBar;
- (BOOL)getIsShowingInputView;
- (BOOL)getIsEnableChangeContentState;
- (void)updateRedDotList:(id)a0;
- (void)checkHasRedDot;
- (double)getNotifyAreaHeight;
- (void)checkNotifyAreaHeightIsChanged;
- (id)createTopCommentContainerViewIfNeeded;
- (id)createHotWordsCommentContainerViewIfNeeded;
- (id)commentDataMgr;
- (void)reportForDisplay;
- (void)reportForUnDisplay;
- (void)handleScrollConflicts:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)checkSelfHasConsumeTouch:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)redirectHitTestIfNeeded:(struct CGPoint { double x0; double x1; })a0 event:(id)a1 originHitView:(id)a2;
- (id)redirectHitTouchIfNeeded:(struct CGPoint { double x0; double x1; })a0 touchInView:(id)a1;
- (BOOL)checkSelfHasConsumePivotCollectionTapGesture:(id)a0;
- (id)createUnReadCountLabel;
- (BOOL)isUnReadCntLabelPanNeedScrollCommentTable;
- (id)createCommentTableView;
- (void)handleCommentTableTapGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
