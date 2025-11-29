@class UIImageView, UILabel, UIImage;

@interface IESLiveSongWantListenInfoView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImage *icon;

- (void)updateWantListenTextWithText:(id)a0;
- (void).cxx_destruct;
- (id)initWithIcon:(id)a0;
- (void)setupSubviews;

@end
