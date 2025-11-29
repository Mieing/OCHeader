@class IESLiveRelatedLiveSelectionTabView, NSArray, IESLiveButton, HTSEventContext, UIView, HTSLiveAmazingBackgroundView;
@protocol IESLiveRelatedLiveListViewProtocol;

@interface IESLiveRelatedLivePortraitPanel : UIView

@property (retain, nonatomic) NSArray *tabModels;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *backgroundMaskView;
@property (retain, nonatomic) IESLiveRelatedLiveSelectionTabView *headerView;
@property (retain, nonatomic) UIView<IESLiveRelatedLiveListViewProtocol> *contentListView;
@property (retain, nonatomic) IESLiveButton *closeButton;
@property (copy, nonatomic) id /* block */ dismissPanel;
@property (copy, nonatomic) id /* block */ selectionTabDidClick;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)startShowAnimation;
- (void)closeButtonDidClick;
- (void)startHideAnimation;
- (id)initWithPanelTabModels:(id)a0 bgColor:(id)a1 diContext:(id)a2;
- (void)startHideAnimation:(BOOL)a0;
- (void)setupSubViewsWithContentViewBgColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculatePanelFrameWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentListView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleTapGesture:(id)a0;

@end
