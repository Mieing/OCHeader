@class UILabel, NSString, BDImageView;

@interface CJPayBioSystemAuthorityView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) BDImageView *imageView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 content:(id)a1;

@end
