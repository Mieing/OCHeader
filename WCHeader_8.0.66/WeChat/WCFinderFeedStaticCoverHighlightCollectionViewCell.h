@class FavAttributeCPLabel, WCFinderFeedStaticCoverView, UIImage, WCFinderFeedContentVM, WCFinderDataItem, WCFinderFeedMediaWrap, NSString, WCFinderFeedStaticCoverContactView, UIPageControl, UILabel;
@protocol WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate;

@interface WCFinderFeedStaticCoverHighlightCollectionViewCell : UICollectionViewCell <WCFinderSearchHighLightItemExt, MMImageLoaderObserver, WCFinderShareAbstractCell>

@property (retain, nonatomic) WCFinderFeedStaticCoverView *coverView;
@property (retain, nonatomic) WCFinderFeedStaticCoverContactView *contactView;
@property (retain, nonatomic) FavAttributeCPLabel *descLabel;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long flag;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) UIPageControl *pageCtrl;
@property (retain, nonatomic) UILabel *postTimeLabel;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) UIImage *fullScreenImage;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (weak, nonatomic) id<WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate> delegate;
@property (nonatomic) BOOL hiddenPostTime;
@property (nonatomic) unsigned long long menuItemFlag;
@property (nonatomic) unsigned long long menuItemStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)cellHeightWithModel:(id)a0 width:(double)a1;
+ (double)cellHeightWithFeedContentVM:(id)a0 width:(double)a1;
+ (double)_cellHeightWithModel:(id)a0 normalText:(id)a1 highlightKeyWords:(id)a2 width:(double)a3;
+ (id)createDescLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)updateWithFeedContentVM:(id)a0 infoType:(unsigned long long)a1 flag:(unsigned long long)a2;
- (void)updateContentWith:(id)a0 infoType:(unsigned long long)a1 flag:(unsigned long long)a2;
- (void)_updateContentWith:(id)a0 normalText:(id)a1 highlightKeyWords:(id)a2 nameHightkeywords:(id)a3 isHidePostTimeLabel:(BOOL)a4 infoType:(unsigned long long)a5 flag:(unsigned long long)a6;
- (id)createCellConfig;
- (void)adjustMargin;
- (void)clickContact;
- (void)onFeedLikedDataChanged:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)transitionStartImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionStartImageRectInView:(id)a0 willPresent:(BOOL)a1;
- (id)transitionEndImage;
- (id)cellIdentifier;
- (void)doShareAnimation;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)longSingleFingerPressGes:(id)a0;
- (void)onAnchor;
- (void)onRemove;
- (void)onMutiSeleted;
- (void)onForward;
- (void)onEditTag;
- (void)onDelete;
- (void).cxx_destruct;

@end
