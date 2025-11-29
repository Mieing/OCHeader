@class WCFinderSearchContactCellContentView, WCFinderSearchInfo;
@protocol WCFinderMoreLiveSearchContactCollectionViewCellDelegate;

@interface WCFinderMoreLiveSearchContactCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderSearchInfo *searchInfo;
@property (retain, nonatomic) WCFinderSearchContactCellContentView *cellContentView;
@property (weak, nonatomic) id<WCFinderMoreLiveSearchContactCollectionViewCellDelegate> delegate;

+ (double)cellHeightWith:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubview;
- (void)prepareForReuse;
- (void)updateUIWith:(id)a0 isShowSeparatorLine:(BOOL)a1;
- (id)getAttributeText:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
