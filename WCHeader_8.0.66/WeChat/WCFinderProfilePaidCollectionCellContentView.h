@class MMUIButton, NSString, FinderPaidCollectionInfo, UILabel, RichTextView, MMWebImageView;

@interface WCFinderProfilePaidCollectionCellContentView : UIView <WCFinderPaidCollectionExt>

@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) RichTextView *titleView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMUIButton *priceLabel;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollection;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)titleMaxWidthWithWidth:(double)a0;
+ (double)viewHeightWithPaidCollection:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithPaidCollection:(id)a0;
- (id)priceTextWithPrice:(unsigned long long)a0 purchased:(BOOL)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updatePriceText:(id)a0;
- (void)onPaidCollectionTopicID:(id)a0 purchaseStateChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
