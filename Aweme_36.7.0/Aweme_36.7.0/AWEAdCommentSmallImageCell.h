@class DUXBaseLabel, DUXBaseImageView;

@interface AWEAdCommentSmallImageCell : DUXBaseCollectionViewCell

@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (retain, nonatomic) DUXBaseLabel *extraNumLabel;

- (void)configureWithUrl:(id)a0 extraNum:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
