@class NSMutableArray, WCFinderPersonalCenterSidesButton;
@protocol WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate;

@interface WCFinderPersonalCenterWeixinContactCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *ompactnessCell;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *fellowCell;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *paymentCell;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *messageCell;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *privateMsgCell;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *orderCell;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *managerCell;
@property (weak, nonatomic) id<WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate> delegate;

+ (id)cellID;
+ (BOOL)isInLimitState;
+ (BOOL)showPrivateMsgCell;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createActionButton:(id)a0 action:(SEL)a1;
- (void)_setupInteractiveCell;
- (void)_setupFellowCell;
- (void)_setupPaymentCell;
- (void)_setupMessageCell;
- (void)_setupPrivateMsgCell;
- (void)_setupOrderCell;
- (void)_setupManagerCell;
- (void)updateLikeCount:(unsigned long long)a0 favCount:(unsigned long long)a1 displayPurchasedEntrance:(BOOL)a2 displayInteractive:(BOOL)a3 enableOrder:(BOOL)a4 historyCell:(long long)a5;
- (void)_updateReddot;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)applyLayout;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)getInteractiveRightText;
- (id)createIconAttrText:(id)a0;
- (void)onClickCompactness;
- (void)onClickFollowList;
- (void)onClickLikeList;
- (void)onClickPaymentList;
- (void)onClickGoodFavList;
- (void)onClickFavList;
- (void)onClickNotificationList;
- (void)onClickPrivateMsgList;
- (void)onClickOrderCenter;
- (void)onClickBlockManager;
- (void).cxx_destruct;

@end
