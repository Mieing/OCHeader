@class NSString, FinderLiveQuestActivity, MMWebImageView;

@interface MMFinderLiveAnchorTaskCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *anchorTaskImgView;
@property (retain, nonatomic) FinderLiveQuestActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)collectionCellSpacing;
+ (double)collectionCellWidth;
+ (double)collectionCellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutAnchorTaskImgView;
- (void)updateAnchorTaskImgView;
- (id)accessibilityLabel;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
