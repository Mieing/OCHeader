@class UIImageView, IESECServiceProxy, UILabel, UIButton;
@protocol IESECShopPageContextV2, IESECShopForwardCoService, IESECShopLiveTabExceptionViewDelegate;

@interface IESECShopLiveTabExceptionView : UIView {
    unsigned long long _type;
    id<IESECShopPageContextV2> _context;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardService;
@property (weak, nonatomic) id<IESECShopLiveTabExceptionViewDelegate> delegate;

- (id)initWithShopContext:(id)a0;
- (void)updateWithExceptionType:(unsigned long long)a0;
- (void)TapButton:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
