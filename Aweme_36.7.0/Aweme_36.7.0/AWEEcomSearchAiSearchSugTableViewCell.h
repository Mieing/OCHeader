@class BDImageView;

@interface AWEEcomSearchAiSearchSugTableViewCell : AWEEcomSearchBaseSugTableViewCell

@property (retain, nonatomic) BDImageView *tailView;

+ (id)identifier;

- (void)configureUI;
- (void)configureWithContent:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)updateType;
- (void)configureWithModel:(id)a0;

@end
