@class UITapGestureRecognizer, NSString, MMFinderLiveGoodsCellSubInfosView, MMUIView, MMFinderLiveAnchorGoodsCellLeftCardView, MMFinderLiveTagsLabel;
@protocol MMFinderLiveShopShelfManagedItemDelegate;

@interface MMFinderLiveAnchorGoodsManageCell : MMFinderLiveGoodsCell <MMFinderLiveTagsLabelDelegate>

@property (retain, nonatomic) MMFinderLiveAnchorGoodsCellLeftCardView *leftCardView;
@property (retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel;
@property (retain, nonatomic) MMFinderLiveGoodsCellSubInfosView *subInfosView;
@property (retain, nonatomic) UITapGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) MMUIView *backGroundClickView;
@property (weak, nonatomic) id<MMFinderLiveShopShelfManagedItemDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)cellHeightWithModel:(id)a0 cellWidth:(double)a1;
+ (double)imageWidthForCellWidth:(double)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)addGoodsTitleLabel;
- (void)onWebImageGetDifferentSize;
- (void)layoutSubviews;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)addBackGroundClickView;
- (void)onTapGesture:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)unSelectedImageForSelectedButton;
- (id)accessibilityAttributedLabel;
- (void).cxx_destruct;

@end
