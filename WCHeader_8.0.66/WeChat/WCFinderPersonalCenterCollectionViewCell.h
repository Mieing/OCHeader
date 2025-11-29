@class WCFinderPersonalCenterPostActionView, UIButton, WCFinderPersonalCenterSidesButton, WCFinderPersonalCenterContactData, UILabel, WCFinderPersonalCenterContactView, UIView;
@protocol WCFinderPersonalCenterCameraActionHandle, WCFinderPersonalCenterLiveActionHandle, WCFinderPersonalCenterCollectionViewCellDelegate;

@interface WCFinderPersonalCenterCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderPersonalCenterContactData *contactData;
@property (retain, nonatomic) WCFinderPersonalCenterContactView *contactView;
@property (retain, nonatomic) UILabel *createTipsLabel;
@property (retain, nonatomic) UIView *arrangeBottomLine;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *memberMsgBtn;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *finderMsgBtn;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *finderPrivateMsgBtn;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *creatorCenterBtn;
@property (retain, nonatomic) WCFinderPersonalCenterPostActionView *postActionView;
@property (weak, nonatomic) id<WCFinderPersonalCenterCollectionViewCellDelegate> delegate;
@property (readonly, nonatomic) UIButton *cameraBtn;
@property (readonly, nonatomic) UIView *contactContainer;
@property (retain, nonatomic) id<WCFinderPersonalCenterCameraActionHandle> cameraHandle;
@property (retain, nonatomic) id<WCFinderPersonalCenterLiveActionHandle> liveHandle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finderPrepare;
- (id)contact;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutElements;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)createActionButton:(id)a0 action:(SEL)a1;
- (void)setupContact:(id)a0;
- (void)applyLayout;
- (id)msgButtonAssibilityLabelWithMainString:(id)a0 msgCount:(long long)a1;
- (BOOL)isShowRedDot;
- (void)setupSubviews;
- (void)clickMemberMsgAction;
- (void)clickMentionAction;
- (void)clickPrivateMSGAction;
- (void)clickCreatorCenterBtn;
- (BOOL)checkAccountLogout;
- (void)reportExposeAfterSetupSubviews;
- (void).cxx_destruct;

@end
