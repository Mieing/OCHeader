@class UIImageView, UILabel, UIView;

@interface AWEFavoriteGetNewFileView : UIView

@property (retain, nonatomic) UIImageView *fileCoverImageView;
@property (retain, nonatomic) UILabel *fileNameLabel;
@property (retain, nonatomic) UIView *lineView;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setUpUI;

@end
