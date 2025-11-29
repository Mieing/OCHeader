@class UILabel, UIImageView, NSString;

@interface AWEPayIconNameStackView : UIStackView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *maskNameLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *iconUrl;

- (void)updateWithIconUrl:(id)a0 placeholder:(id)a1 completion:(id /* block */)a2;
- (void)updateWithName:(id)a0 maskName:(id)a1;
- (id)initWithIconUrl:(id)a0 placeholder:(id)a1 name:(id)a2 maskName:(id)a3 maxWidth:(double)a4;
- (void)updateWithIconUrl:(id)a0 placeholder:(id)a1 name:(id)a2 maskName:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateNameLabel;

@end
