@class UILabel, AWEPOIUgcButtonSkinConfig;

@interface AWEPOIDetailCommentTagsCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) BOOL ugcTagAB;
@property (retain, nonatomic) AWEPOIUgcButtonSkinConfig *buttonSkinConfig;

+ (id)labelTextWithModel:(id)a0;
+ (double)itemWidthWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })itemSizeWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })ugcItemSizeWithModel:(id)a0;
+ (double)itemHeight;

- (void)updateWithUgcTagModel:(id)a0;
- (void)updateDisplayWithModel:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
