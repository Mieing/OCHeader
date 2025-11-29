@class AWEIMFlexPresenter, NSString;
@protocol AWEIMSelectableLabelPresenterProtocol;

@interface AWEIMMessageMenuComponent : AWEIMFlexComponent <AWEIMSelectableLabelAction, AWEIMMessageMenuInterface, AWEIMComponentLazyCreate, AWEIMMessageTableViewAction>

@property (weak, nonatomic) AWEIMFlexPresenter<AWEIMSelectableLabelPresenterProtocol> *currentSelectedPresenter;
@property (nonatomic) BOOL optimizeEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)viewControllerLifeCycleChanged:(unsigned long long)a0;
- (void)tableViewAllDidEndScroll:(id)a0;
- (void)didResetTextSelectWithHitPoint:(struct CGPoint { double x0; double x1; })a0 pointInView:(id)a1;
- (void)didStartDraggingGrabber;
- (void)showMenuFromLongPressGesture:(id)a0;
- (void)menuDidSelectedWithType:(unsigned long long)a0;
- (void)clearTextSelectedState;
- (struct CGPoint { double x0; double x1; })__getIMCustomMenuViewTapLocationInScreenAtLocation:(struct CGPoint { double x0; double x1; })a0 locationInView:(id)a1;
- (void)didEndTextSelectWithStartLocation:(struct CGPoint { double x0; double x1; })a0 lowLocation:(struct CGPoint { double x0; double x1; })a1 locationInView:(id)a2 tryStartLocationFirst:(BOOL)a3 presenter:(id)a4;
- (void)p_tableViewAllDidEndScroll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__getIMCustomMenuViewCellBubbleFrameInScreen:(id)a0;
- (id)messageMenuTypeListWithMessage:(id)a0 conversation:(id)a1 isTextPartiallySelected:(BOOL)a2;
- (id)filterMenuItemIfNeeded:(id)a0 forMessage:(id)a1;
- (void).cxx_destruct;

@end
