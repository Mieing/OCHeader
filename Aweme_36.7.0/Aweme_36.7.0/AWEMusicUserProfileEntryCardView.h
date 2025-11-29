@class NSString, UIImageView, NSArray, UILabel;

@interface AWEMusicUserProfileEntryCardView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSArray *lightURLList;
@property (retain, nonatomic) NSArray *darkURLList;
@property (nonatomic) double cardWidth;

- (void)configSubviews;
- (void)refreshView;
- (void)refreshWithTitle:(id)a0 subtitle:(id)a1 lightURLList:(id)a2 darkURLList:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
