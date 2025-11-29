@class UILabel, UIImageView, IESECGoodsFeedPopoverItemConfiguration;
@protocol IESECGoodsFeedPopoverItemDelegate;

@interface IESECGoodsFeedPopoverItem : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *iconImageView2;
@property (weak, nonatomic) id<IESECGoodsFeedPopoverItemDelegate> delegate;
@property (copy, nonatomic) IESECGoodsFeedPopoverItemConfiguration *configration;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)tapAction;

@end
