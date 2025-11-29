@class UIView, NSString, UIImageView, WCStoryReportUtil, UIButton, NSMutableArray, UICollectionView, WCStoryTimelineEntranceCollectionViewLayout, UILabel;
@protocol WCStoryTimelineEntranceTableViewCellDelegate;

@interface WCStoryTimelineEntranceTableViewCell : MMTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

@property (retain, nonatomic) NSMutableArray *unreadStoryDataUnits;
@property (retain, nonatomic) NSMutableArray *unreadCommentStoryDataUnits;
@property (nonatomic) unsigned long long timestampUnreadStoryCount;
@property (nonatomic) unsigned long long unreadCommentCount;
@property (retain, nonatomic) WCStoryReportUtil *storyReportUtil;
@property (retain, nonatomic) UIButton *topButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *unreadCommentCountLabel;
@property (retain, nonatomic) UIImageView *unreadCommentImageview;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) WCStoryTimelineEntranceCollectionViewLayout *layout;
@property (nonatomic) double lastScrollViewX;
@property (nonatomic) BOOL canShowDeleteButton;
@property (nonatomic) BOOL canAdjustInset;
@property (retain, nonatomic) UIButton *deleteButton;
@property (copy, nonatomic) id /* block */ showPreviewBlock;
@property (weak, nonatomic) id<WCStoryTimelineEntranceTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;
- (void)setupSubviews;
- (BOOL)hasSetupUnreadUserNameArray;
- (void)reloadData;
- (void)clearFriendStoryVideo;
- (void)resetCollectionInset;
- (void)scrollToTop;
- (void)reportExposeData;
- (id)userNameStrFromDataUnits:(id)a0;
- (void)layoutCustomSubViews;
- (double)cellBaseHeight;
- (BOOL)shouldShowTopButton;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)flowLayout;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)reloadCollectionViewInsetWithAnimation:(BOOL)a0;
- (void)clickDeleteButtonAction;
- (void).cxx_destruct;

@end
