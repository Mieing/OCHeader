@class UILabel, CJPayStyleImageView, CJPayStateShowModel;

@interface CJPayImageLabelStateView : UIView

@property (retain, nonatomic) CJPayStyleImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayStateShowModel *showModel;

- (void)p_updateContent;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
