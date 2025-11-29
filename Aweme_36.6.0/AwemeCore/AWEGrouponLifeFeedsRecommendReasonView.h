@class UILabel, AWEGrouponLifeFeedsRecommendReason, NSMutableAttributedString;

@interface AWEGrouponLifeFeedsRecommendReasonView : UIView

@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) AWEGrouponLifeFeedsRecommendReason *model;
@property (retain, nonatomic) NSMutableAttributedString *originalRecommendAttributedString;

+ (double)cardPadding;

- (void)setRecommendReason:(id)a0;
- (void)loadImageURL:(id)a0 completion:(id /* block */)a1;
- (id)spacerWithWidth:(double)a0;
- (void)buildRecommendReasonContentWithMaxWidth:(double)a0 recommendReasonText:(id)a1 attachmentsToLoad:(id)a2 recommendReason:(id)a3;
- (void)asyncLoadImagesForRecommendReason:(id)a0;
- (void)processTag:(id)a0 withMaxWidth:(double)a1 currentTotalWidth:(double *)a2 recommendReasonText:(id)a3 attachmentsToLoad:(id)a4;
- (BOOL)processItem:(id)a0 withTagPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 maxWidth:(double)a2 currentTotalWidth:(double *)a3 recommendReasonText:(id)a4 attachmentsToLoad:(id)a5;
- (double)calculateItemWidth:(id)a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)appendTextItem:(id)a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 toResult:(id)a2 currentTotalWidth:(double *)a3;
- (void)appendImageItem:(id)a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 toResult:(id)a2 currentTotalWidth:(double *)a3 attachmentsToLoad:(id)a4;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
