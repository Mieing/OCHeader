@class IESECLiveCardDataModel, IESECLiveContext, NSString, IESECLiveCardViewModelV2;
@protocol IESECLiveCardViewDelegate;

@interface IESECLiveBaseCardView : UIView <IESECLiveCardViewProtocol, IESECLiveCardModelUpdateDelegate>

@property (weak, nonatomic) id<IESECLiveCardViewDelegate> delegate;
@property (nonatomic) long long animationStatus;
@property (nonatomic) BOOL onlyCloseByMessage;
@property (nonatomic) BOOL isPreShow;
@property (nonatomic) BOOL onEnterCard;
@property (nonatomic) long long scene;
@property (nonatomic) long long priority;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly, nonatomic) IESECLiveCardDataModel *cardModel;
@property (retain, nonatomic) IESECLiveCardViewModelV2 *cardViewModelV2;
@property (nonatomic) long long popCardClickCount;
@property (nonatomic) double beginShowTime;
@property (nonatomic) long long cardPopTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnEnter:(BOOL)a0 followUp:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)enableUpdate;
- (void)configLayerAnchorPoint;
- (BOOL)userNewAnimation:(BOOL *)a0;
- (void)showWithAnimation:(BOOL)a0 followUp:(BOOL)a1 completion:(id /* block */)a2;
- (void)closeWithStatus:(long long)a0 animation:(BOOL)a1 completion:(id /* block */)a2;
- (void)closeWithReason:(long long)a0 status:(long long)a1 completion:(id /* block */)a2;
- (void)updateWithCardViewModel:(id)a0;
- (void)showBulletScreenNoticeTextIfNeed:(id)a0 trackEvent:(id)a1;
- (void)updateWithCardModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })cardSize;
- (id)cardID;

@end
