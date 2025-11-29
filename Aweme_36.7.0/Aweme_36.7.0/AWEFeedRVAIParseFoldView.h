@class UILabel, UIImageView;

@interface AWEFeedRVAIParseFoldView : UIView

@property (nonatomic) long long style;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;

- (void)updateExpand:(BOOL)a0;
- (id)initWithLayoutStyle:(long long)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
