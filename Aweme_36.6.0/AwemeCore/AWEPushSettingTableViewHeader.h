@class NSString, UIImageView, NSURL, UILabel;

@interface AWEPushSettingTableViewHeader : UIView

@property (copy, nonatomic) NSURL *imageUrl;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (double)subTitleHeight;
- (id)initWithImageUrl:(id)a0 subTitle:(id)a1;
- (void).cxx_destruct;
- (double)headerViewHeight;
- (void)setupUI;

@end
