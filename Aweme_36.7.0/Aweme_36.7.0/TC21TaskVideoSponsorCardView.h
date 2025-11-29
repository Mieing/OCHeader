@class NSString, UIImageView, UILabel, UIButton;

@interface TC21TaskVideoSponsorCardView : UIView

@property (retain, nonatomic) UIImageView *sponsorImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *checkDetailButton;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) id /* block */ clickGoDetailBlock;

- (id)labelWithFont:(id)a0 textColor:(id)a1;
- (void)checkDetailAction;
- (void)setupContraints;
- (BOOL)transferToURL:(id)a0;
- (void)updateWithBrandImage:(id)a0 title:(id)a1 info:(id)a2 jumpUrl:(id)a3;
- (void)useGQImage;
- (void)useGQTitleParameter;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
