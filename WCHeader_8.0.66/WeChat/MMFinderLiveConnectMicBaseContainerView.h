@class UIScrollView, NSArray, MMFinderLiveTaskId;
@protocol MMFinderLiveConnectMicContainerViewDelegate, MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectMicBaseContainerView : UIView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveConnectedMicUserCellViewDelegate> cellActionDelegate;
@property (weak, nonatomic) id<MMFinderLiveConnectMicContainerViewDelegate> containerDelegate;
@property (readonly, nonatomic) UIScrollView *mainScrollView;
@property (readonly, nonatomic) NSArray *connectMicUserList;

+ (id)createSearchBarWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 placeholder:(id)a1;
+ (void)updateSearchBarAppearance:(id)a0;

- (void)onContainerWillShow;
- (void)onContainerDidShow;
- (void)onContainerWillHide;
- (void)onContainerDidHide;
- (void)onContainerWillDisappear;
- (void)reloadContent;
- (void)updateWithConnectMicUserList:(id)a0;
- (void)scrollListToTopAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
