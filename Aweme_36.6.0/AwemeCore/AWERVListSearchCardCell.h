@class NSArray, UIImageView, AWEAwemeModel, UILabel, NSString, AWERVListSearchModel;

@interface AWERVListSearchCardCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *searchLabel;
@property (copy, nonatomic) NSArray *searchButtonList;
@property (retain, nonatomic) AWEAwemeModel *currentPlayModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWERVListSearchModel *searchModel;

+ (double)cellHightWithSearchModel:(id)a0;

- (void)updateWithSearchModel:(id)a0;
- (void)trackShowSearchCard;
- (id)searchButtonWithQuery:(id)a0 index:(long long)a1;
- (id)trackParamsWithQuery:(id)a0 index:(long long)a1;
- (void)trackClickSearchWordWithQuery:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
