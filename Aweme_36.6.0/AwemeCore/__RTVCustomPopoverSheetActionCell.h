@class UIImageView, UILabel, UIView, __RTVCustomPopoverSheetActionCellModel;
@protocol __RTVCustomPopoverSheetActionCellDelegate, RxInjector, RTVSwitchProtocol;

@interface __RTVCustomPopoverSheetActionCell : RTVCollectionViewCell

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<RTVSwitchProtocol> *switcher;
@property (retain, nonatomic) UIView *divider;
@property (readonly, nonatomic) __RTVCustomPopoverSheetActionCellModel *cellModel;
@property (weak, nonatomic) id<__RTVCustomPopoverSheetActionCellDelegate> delegate;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__layoutComponents;
- (void)__refreshComponents;
- (void)__tapCell:(id)a0;
- (void).cxx_destruct;
- (void)_createComponents;

@end
