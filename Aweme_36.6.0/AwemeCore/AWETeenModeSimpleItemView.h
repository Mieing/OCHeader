@class UIImageView, UILabel, AWETeenModeItemLayoutModel;

@interface AWETeenModeSimpleItemView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWETeenModeItemLayoutModel *model;

- (void)setUIAccessbilityElement;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)setupUI;

@end
