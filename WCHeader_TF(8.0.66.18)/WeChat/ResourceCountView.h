@class UIImageView, UILabel;

@interface ResourceCountView : UIView

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *recordImageView;
@property (retain, nonatomic) UILabel *recordCountLabel;
@property (retain, nonatomic) UIImageView *fileImageView;
@property (retain, nonatomic) UILabel *fileCountLabel;
@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UILabel *videoCountLabel;
@property (retain, nonatomic) UIImageView *imgImageView;
@property (retain, nonatomic) UILabel *imgCountLabel;
@property (nonatomic) unsigned long long imageCount;
@property (nonatomic) unsigned long long videoCount;
@property (nonatomic) unsigned long long fileCount;
@property (nonatomic) unsigned long long recordCount;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
