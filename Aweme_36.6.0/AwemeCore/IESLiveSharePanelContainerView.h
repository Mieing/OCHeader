@class NSArray, NSString, IESLiveSharePanelView;

@interface IESLiveSharePanelContainerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) IESLiveSharePanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTapAction:(id)a0;
- (id)initWithItems:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setupUI;

@end
