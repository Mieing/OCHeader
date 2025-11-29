@class UILabel;
@protocol RxInjector, RTVXRStateRecorder;

@interface RTVInviteUserListHeaderView : RTVCollectionSectionSupplementaryView

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__layoutComponents;
- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)reuseIdentifier;

@end
