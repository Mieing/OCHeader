@class MMHeadImageView, UIImageView, UILabel, UIView, UIButton;

@interface WXGRoamChooseRangeExactUserCell : UITableViewCell

@property (retain, nonatomic) UIImageView *selectedImage;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) MMHeadImageView *headIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *seperator;

+ (double)cellHeight;

- (void)setCellWidth:(double)a0 type:(unsigned long long)a1 selected:(BOOL)a2 sessionName:(id)a3 showSize:(BOOL)a4 size:(unsigned long long)a5;
- (void)initView;
- (void)onDetail;
- (void).cxx_destruct;

@end
