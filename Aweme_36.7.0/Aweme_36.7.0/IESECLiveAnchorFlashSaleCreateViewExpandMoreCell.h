@class UILabel, UIImageView, UIButton;
@protocol IESECLiveAnchorFlashSaleCreateViewExpandMoreCellDelegate;

@interface IESECLiveAnchorFlashSaleCreateViewExpandMoreCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL expand;
@property (weak, nonatomic) id<IESECLiveAnchorFlashSaleCreateViewExpandMoreCellDelegate> delegate;

- (void)p_buttonDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
