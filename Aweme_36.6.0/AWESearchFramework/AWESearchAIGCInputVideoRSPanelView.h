@class UITapGestureRecognizer, AWESearchAIGCInputVideoRSPanelViewModel, CADisplayLink, NSObject, NSString, UIPanGestureRecognizer, UITableView;
@protocol OS_dispatch_source, AWESearchAIGCInputVideoRSPanelViewDelegate;

@interface AWESearchAIGCInputVideoRSPanelView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, AWESearchAIGCInputVideoRSHeaderViewDelegate, AWESearchAIGCInputVideoRSCellDelegate, AWESearchAIGCInputVideoRSPanelViewModelDelegate, AWESearchAIGCInputVideoRSPanelAction>

@property (retain, nonatomic) AWESearchAIGCInputVideoRSPanelViewModel *viewModel;
@property (weak, nonatomic) id<AWESearchAIGCInputVideoRSPanelViewDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) CADisplayLink *animationDisplayLink;
@property (copy, nonatomic) id /* block */ animationCallback;
@property (copy, nonatomic) NSObject<OS_dispatch_source> *animationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panAction:(id)a0;
- (void)videoRSCell:(id)a0 didSelect:(id)a1;
- (void)videoRSHeaderShouldClose:(id)a0;
- (void)updateSubviewsLayoutIsHidePanel:(BOOL)a0;
- (void)invalidateAnimationDisplayLink;
- (void)updatePanelPositionFinished:(BOOL)a0;
- (void)createAnimationDisplayLink;
- (void)updatePanelPosition;
- (void)updateUnUsedRSListWithUsedModel:(id)a0;
- (void)setVideoRSPanelIsShowing:(BOOL)a0;
- (id)videoRSPanelResponseModel;
- (void)videoRSPanelAddShowCount;
- (long long)videoRSPanelCurrentShowCount;
- (void)videoRSPanelViewModel:(id)a0 updateUnUsedRSList:(id)a1;
- (BOOL)videoRSPanelIsShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoRSResponseModel:(id)a1 delegate:(id)a2;
- (void)startShowAnimationWithCallBack:(id /* block */)a0;
- (void)startHideAnimationWithCallBack:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (void)touchAction:(id)a0;

@end
