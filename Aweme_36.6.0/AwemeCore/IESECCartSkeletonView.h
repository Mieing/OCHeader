@class IESECUIButton, UIView;
@protocol IESECCartSkeletonDelegate;

@interface IESECCartSkeletonView : UIView

@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (retain, nonatomic) IESECUIButton *backButton;
@property (retain, nonatomic) UIView *headerContentView;
@property (weak, nonatomic) id<IESECCartSkeletonDelegate> delegate;

- (void)closeCart;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
