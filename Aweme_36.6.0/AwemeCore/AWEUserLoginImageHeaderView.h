@class UIImageView, NSString, UIView;

@interface AWEUserLoginImageHeaderView : UIView

@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIView *translucentView;
@property (copy, nonatomic) NSString *headURL;

- (id)initWithHeadURL:(id)a0;
- (void)setupContentImageView;
- (void).cxx_destruct;
- (void)setupUI;

@end
