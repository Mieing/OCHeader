@class NSString, UITapGestureRecognizer, MMFinderLiveAnchorBulkBuyCellLeftCardView, MMFinderLiveBulkBuyMembersView, MMUIView, MMFinderLiveTagsLabel, MMFinderLiveShopShelfBulkBuyViewModel, UILabel;
@protocol MMFinderLiveShopShelfManagedItemDelegate;

@interface MMFinderLiveAnchorBulkBuyManageCell : MMFinderLiveGoodsBaseCell <MMFinderLiveTagsLabelDelegate>

@property (retain, nonatomic) MMFinderLiveAnchorBulkBuyCellLeftCardView *leftCard;
@property (retain, nonatomic) MMFinderLiveTagsLabel *titleLabel;
@property (retain, nonatomic) UILabel *shopLabel;
@property (retain, nonatomic) MMFinderLiveBulkBuyMembersView *membersView;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) MMUIView *backgroundClickView;
@property (retain, nonatomic) UITapGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) MMFinderLiveShopShelfBulkBuyViewModel *viewModel;
@property (weak, nonatomic) id<MMFinderLiveShopShelfManagedItemDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferHeightWithViewModel:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)addBackgroundClickView;
- (void)addTitleLabel;
- (void)addTimeLabel;
- (void)addCommentLabel;
- (void)addShopLabel;
- (void)updateWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)onWebImageGetDifferentSize;
- (void)onTapGesture:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)unSelectedImageForSelectedButton;
- (void).cxx_destruct;

@end
