@class IESWalletPopViewModel, UIView;

@interface IESWalletPopContainer : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) IESWalletPopViewModel *model;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)addContentView:(id)a0;
- (void)setupUI;

@end
