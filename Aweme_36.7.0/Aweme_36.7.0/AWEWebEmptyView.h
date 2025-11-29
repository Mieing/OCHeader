@class UIImageView, UILabel, NSString;

@interface AWEWebEmptyView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *urlLabel;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (copy, nonatomic) NSString *urlString;

- (id)URLTextColor;
- (void)setupURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)iconImage;
- (void)setupUI;
- (id)detailTextColor;

@end
