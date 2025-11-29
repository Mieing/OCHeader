@class IESECUIImageView, UIView, UILabel, UIButton;
@protocol IESECCartErrorViewDelegate;

@interface IESECCartErrorView : UIView

@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (weak, nonatomic) id<IESECCartErrorViewDelegate> errorDelegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *descriptionView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) IESECUIImageView *errorImageView;
@property (retain, nonatomic) UILabel *errorTitleLabel;

- (void)updateViewWithViewTypeBig;
- (void)updateViewWithViewTypeSmall;
- (void)updateViewWithViewType:(unsigned long long)a0;
- (void)reconnect;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
