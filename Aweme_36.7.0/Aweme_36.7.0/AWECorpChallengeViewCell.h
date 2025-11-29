@class UILabel, NSString;

@interface AWECorpChallengeViewCell : UICollectionViewCell <AWECompanyChallengeCellProtocol>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)updateWithTheme:(id)a0;
- (void)configWithChallenge:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupUI;

@end
