@class UILabel, UIImageView, NSArray;

@interface AWESearchAnchorItemView : UIView

@property (nonatomic) double itemWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL tooShortToDisplay;
@property (nonatomic) BOOL contentIsLong;
@property (retain, nonatomic) UILabel *itemLabel;
@property (retain, nonatomic) UIImageView *frontIcon;
@property (retain, nonatomic) UIImageView *backIcon;
@property (nonatomic) BOOL isMultiIntention;
@property (retain, nonatomic) NSArray *models;
@property (nonatomic) long long index;
@property (retain, nonatomic) UILabel *itemLabel1;
@property (retain, nonatomic) UILabel *itemLabel2;
@property (retain, nonatomic) UIImageView *backIcon1;
@property (retain, nonatomic) UIImageView *backIcon2;
@property (copy, nonatomic) id /* block */ touchBeganBlock;
@property (copy, nonatomic) id /* block */ touchCancelledBlock;

- (void)updateUITheme;
- (void)updateWithModels:(id)a0;
- (id)getFrontIconImageWithIsBGColorWhite:(BOOL)a0;
- (id)getBackIconImageWithIsBGColorWhite:(BOOL)a0;
- (long long)nextIndexForMultiIntention;
- (void)switchRecommendWord:(id)a0 completion:(id /* block */)a1;
- (BOOL)enablePredictFetch;
- (id)initWithModels:(id)a0 maxWidth:(double)a1 index:(long long)a2;
- (void)updateMultiIntentionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithModel:(id)a0 maxWidth:(double)a1;
- (void)updateWithModel:(id)a0;

@end
