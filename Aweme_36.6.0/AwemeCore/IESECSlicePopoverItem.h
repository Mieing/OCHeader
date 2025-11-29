@class UILabel, UIImageView, IESECSlicePopoverItemConfiguration;
@protocol IESECSlicePopoverItemViewDelegate;

@interface IESECSlicePopoverItem : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) id<IESECSlicePopoverItemViewDelegate> delegate;
@property (copy, nonatomic) IESECSlicePopoverItemConfiguration *configration;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)tapAction;

@end
