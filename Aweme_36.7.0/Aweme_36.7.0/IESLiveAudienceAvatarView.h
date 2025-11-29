@class HTSEventContext, UISwipeGestureRecognizer, NSString, HTSLiveAvatarImageView, HTSLivePaddingLabel, UIButton, UIPanGestureRecognizer, IESLiveAudienceModel;
@protocol IESLiveRankListXRoomModule;

@interface IESLiveAudienceAvatarView : UIView <UIGestureRecognizerDelegate, IESLiveRecycleItem>

@property (nonatomic) BOOL optAudienceAvatarRefresh;
@property (retain, nonatomic) id<IESLiveRankListXRoomModule> rankListModule;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatarView;
@property (retain, nonatomic) HTSLivePaddingLabel *paddingLabel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipteGesture;
@property (retain, nonatomic) IESLiveAudienceModel *audience;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *recycleItemType;

- (id)labelForContribute;
- (void)actionFire:(id)a0;
- (id)pathWithUrlString:(id)a0;
- (BOOL)matchOldUrlArray:(id)a0 currentUrlArray:(id)a1;
- (id)handleLabelStr:(id)a0 audience:(id)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;

@end
