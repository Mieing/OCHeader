@class MMUIButton, WCFinderFeedContentTextView, NSString, FinderPaidCollectionInfo, UIView, UILabel, MMWebImageView;
@protocol WCFinderPaidCollectionDetailHeaderDelegate;

@interface WCFinderPaidCollectionDetailHeaderView : UIView <WCFinderFeedContentTextClickActionDelegate, MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) UIView *infoContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *moreBtn;
@property (retain, nonatomic) UILabel *episodeLabel;
@property (retain, nonatomic) UILabel *orderCountLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) WCFinderFeedContentTextView *descTextView;
@property (retain, nonatomic) UILabel *collectionTitleLabel;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollection;
@property (nonatomic) double layoutWidth;
@property (weak, nonatomic) id<WCFinderPaidCollectionDetailHeaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupPaidCollectionInfoContainer;
- (void)updateWithPaidCollection:(id)a0;
- (void)updateInfoContainer;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isHalfScreen;
- (BOOL)isAuthorScene;
- (id)currentContact;
- (id)descContentConfig;
- (id)collectionTitle;
- (double)descMarginLeft;
- (double)contentHPadding;
- (void)onMoreButtonClicked:(id)a0;
- (void)onFeedContentTextView:(id)a0 clickReadMore:(BOOL)a1;
- (void).cxx_destruct;

@end
