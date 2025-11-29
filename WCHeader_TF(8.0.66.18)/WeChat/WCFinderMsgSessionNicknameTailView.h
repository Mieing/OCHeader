@class NSString, WCFinderMsgSessionUserTagLabel, MMFinderLiveGlobalRankSignView, WCFinderMsgSessionBadgeLabel, WCFinderContact, WCFinderAuthInfo, MMFinderLiveFansGroupSignView, NSMutableArray, WCFinderAuthInfoIconView;
@protocol WCFinderMsgSessionNicknameTailViewDelegate;

@interface WCFinderMsgSessionNicknameTailView : UIView <MMWebImageViewDelegate>

@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *rankSignView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) WCFinderMsgSessionBadgeLabel *badgeLabel;
@property (retain, nonatomic) WCFinderMsgSessionUserTagLabel *userTagLabel;
@property (retain, nonatomic) NSMutableArray *contentViewItems;
@property (retain, nonatomic) WCFinderAuthInfo *authInfo;
@property (retain, nonatomic) WCFinderContact *contact;
@property (weak, nonatomic) id<WCFinderMsgSessionNicknameTailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createNewTailView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateContactExtInfo:(id)a0;
- (void)layoutSubviews;
- (void)_initializeSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onLoadImageOK:(id)a0;
- (void)upateAuthInfoViewDisplay;
- (void).cxx_destruct;

@end
