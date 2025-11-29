@class AWEEcomSearchCouponTagView, NSString, UIImageView, AWESearchAnchorListModel, UIView, UILabel, AWESearchAnchorItemView;

@interface AWECommentSearchAnchorView : UIView <AWECommentSearchAnchorViewProtocol>

@property (retain, nonatomic) AWESearchAnchorListModel *model;
@property (nonatomic) BOOL needTrackDisplayEvent;
@property (nonatomic) unsigned long long displayCount;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic) double titleViewWidth;
@property (retain, nonatomic) UIImageView *titleIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchAnchorItemView *firstItemView;
@property (retain, nonatomic) AWEEcomSearchCouponTagView *ecomCoupontag;
@property (nonatomic) BOOL isBgWhite;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ itemClickBlock;
@property (copy, nonatomic) id /* block */ itemsDisplayBlock;
@property (copy, nonatomic) id /* block */ itemTouchBeganBlock;
@property (copy, nonatomic) id /* block */ itemTouchCancelledBlock;
@property (copy, nonatomic) id /* block */ updateMultiIntentionFinishBlock;
@property (nonatomic) BOOL firstItemContentIsLong;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackSearchAnchorShowIfNeeded;
- (void)updateMultiIntentionWord;
- (void)updateUITheme;
- (void)updateWordsHotSpotArea;
- (BOOL)isMultiIntentionWords;
- (void)itemDidClicked:(id)a0;
- (void)entireDidClicked;
- (void).cxx_destruct;
- (void)updateItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;
- (void)updateTitleView;

@end
