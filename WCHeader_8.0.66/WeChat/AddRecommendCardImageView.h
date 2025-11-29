@class CardImageView, NSString, MMUIView, MMUILabel;
@protocol AddRecommendCardImageViewDelegate;

@interface AddRecommendCardImageView : MMUIView

@property (retain, nonatomic) CardImageView *leftCardImageView;
@property (retain, nonatomic) MMUIView *spacerLine;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) CardImageView *recommendCardImageView;
@property (weak, nonatomic) id<AddRecommendCardImageViewDelegate> delegate;
@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) NSString *nsUserName;
@property (nonatomic) unsigned int imageCandidateSourceType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (id)genTitleLabel:(id)a0;
- (void)setImage:(id)a0;
- (id)getImage;
- (void)onTapAddCardImg:(id)a0;
- (void)onTapSelectRecommendCardImageView:(id)a0;
- (void)selectRecommendCardImageViewAnimationOneLine:(id /* block */)a0;
- (void)selectRecommendCardImageViewAnimationTwoLine:(id /* block */)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)selectRecommendCardImageViewAnimationTwoLineLast:(id /* block */)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cardImageToMoreFootView:(id)a2;
- (void)reportExp;
- (id)getDicReportParams;
- (void).cxx_destruct;

@end
