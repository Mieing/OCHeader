@class NSString, IESLiveInteractSelectSeatViewPanelItem, UILabel, UIView, UIButton;
@protocol IESLiveInteractUserModel, IESLiveInteractEnLargeDoubleCSelectPanelDelegate;

@interface IESLiveInteractEnLargeDoubleCSelectPanel : UIView <IESLiveInteractSelectSeatViewPanelItemDelegate>

@property (retain, nonatomic) id<IESLiveInteractUserModel> leftC;
@property (retain, nonatomic) id<IESLiveInteractUserModel> rightC;
@property (weak, nonatomic) id<IESLiveInteractEnLargeDoubleCSelectPanelDelegate> delegate;
@property (nonatomic) BOOL currentSelectRight;
@property (retain, nonatomic) NSString *guestID;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *middleContainer;
@property (retain, nonatomic) IESLiveInteractSelectSeatViewPanelItem *leftCView;
@property (retain, nonatomic) IESLiveInteractSelectSeatViewPanelItem *rightCView;
@property (retain, nonatomic) UIView *bottomontainer;
@property (retain, nonatomic) UIButton *bottomBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLeftC:(id)a0 rightC:(id)a1 delegate:(id)a2 guestID:(id)a3;
- (void)onItemClick:(id)a0;
- (void)onSendEnlargeInvite;
- (void)onTapLeftC;
- (void)onTapRightC;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpViews;

@end
