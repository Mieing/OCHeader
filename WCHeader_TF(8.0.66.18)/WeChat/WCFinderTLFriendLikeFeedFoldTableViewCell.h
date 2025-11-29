@class CAGradientLayer, WCFinderFoldFeedReportInfo, UICollectionView, NSString, UIView, WCFinderDataItem, MMUILabel;
@protocol WCFinderTLFriendLikeFeedFoldTableViewCellDelegate;

@interface WCFinderTLFriendLikeFeedFoldTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *sectionSeparator;
@property (retain, nonatomic) UIView *lineSeparator;
@property (nonatomic) BOOL showUIDetail;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderFoldFeedReportInfo *foldFeedReportInfo;
@property (weak, nonatomic) id<WCFinderTLFriendLikeFeedFoldTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHByShowLargeSeparatorLine:(BOOL)a0;
+ (id)cellID;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithDataItem:(id)a0 showLargeSeparatorLine:(BOOL)a1 collectionViewOffsetX:(double)a2;
- (double)collectionViewOffsetX;
- (void)selfWillEndDisPlayWithScene:(int)a0;
- (BOOL)shouldShowMoreBtn;
- (unsigned long long)indexRowForMoreBtn;
- (void)onClickLabelBtn;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
