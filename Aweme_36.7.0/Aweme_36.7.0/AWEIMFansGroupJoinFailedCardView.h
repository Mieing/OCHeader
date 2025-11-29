@class UIView, NSString, NSArray, UIImageView, AWEIMFansGroupJoinFailedCardViewController, NSDictionary, UIButton, UILabel;
@protocol IESIMGroupCardConfirmBtnProtocol, AWEIMFansGroupJoinFailedCardDelegate;

@interface AWEIMFansGroupJoinFailedCardView : UIView <UIGestureRecognizerDelegate, AWEIMFansGroupJoinFailedCardDelegate>

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIImageView *failedIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *taskContainerView;
@property (copy, nonatomic) NSArray *taskViewArray;
@property (retain, nonatomic) UIButton<IESIMGroupCardConfirmBtnProtocol> *confirmBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (nonatomic) long long resJoinStatus;
@property (copy, nonatomic) NSDictionary *info;
@property (weak, nonatomic) AWEIMFansGroupJoinFailedCardViewController *viewController;
@property (weak, nonatomic) id<AWEIMFansGroupJoinFailedCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithInfo:(id)a0;
+ (id)getCardViewShowWithInfo:(id)a0 delegate:(id)a1;

- (void)p_dismiss;
- (void)p_hide;
- (void)p_show;
- (void)maskViewTapAction:(id)a0;
- (void)hideFailedCardViewAndReadyToJump;
- (void)configFailedCardConfirmBtnWithJoinStatus:(unsigned long long)a0 confirmBtnTitle:(id)a1 isConfirmBtnEnabled:(BOOL)a2;
- (void)switchFansGroupGuestStateCardConfirmBtnStyle:(unsigned long long)a0 confirmBtnTitle:(id)a1 isConfirmBtnEnabled:(BOOL)a2;
- (void)switchCardStyleToSatisfied;
- (void)addAppearActionBlock:(id /* block */)a0;
- (void)joinFailedCardTaskView:(id)a0 folllowBtnClickWithCompletion:(id /* block */)a1;
- (void)joinFailedCardTaskView:(id)a0 joinMemberBtnClickWithCompletion:(id /* block */)a1;
- (void)joinFailedCardTaskViewTransferToOtherPageAndRefreshWhenReturn:(id)a0;
- (BOOL)__isLiveSubscribeGroup;
- (void)switchCardStyleToLiveSubScribeGroup;
- (void)p_configCardViewCorners;
- (void)__refreshEntryLimitStatus;
- (void)switchCardStyleToAllTaskSatisfied;
- (void)__changeButtonToNextStatus;
- (id)__responseModelForDict:(id)a0;
- (void)__refreshUIWithRVerifyResponseModel:(id)a0 statusCode:(long long)a1;
- (void)__confirmBtnClick;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)layoutSubviews;

@end
