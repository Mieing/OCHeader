@class HTSLiveGiftItem, UIView, NSArray, IESLiveGiveGiftSequenceSender, NSString, IESLiveCountTimer, ComboHint, NSMutableArray, HTSLiveUser, IESLiveGiftPanelDataSharing;
@protocol IESLiveUnifiedGiftComboViewProtocol, IESLiveGiftModuleRecipientRouter;

@interface IESLiveSmallGiftComboView : UIView <IESLiveGiveGiftSequenceSenderDataSource, UIGestureRecognizerDelegate, HTSLiveSendGiftActions, IESLiveUnifiedGiftComboViewDelegate, IESLiveSmallGiftComboViewProtocol>

@property (retain, nonatomic) UIView<IESLiveUnifiedGiftComboViewProtocol> *comboViewContainer;
@property (nonatomic) long long gradient;
@property (retain, nonatomic) NSMutableArray *giftComboInfos;
@property (retain, nonatomic) NSArray *comboHints;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) double buffer;
@property (nonatomic) double currentVerlocity;
@property (nonatomic) double verlocityLimit;
@property (nonatomic) BOOL pressing;
@property (nonatomic) long long pressingTimes;
@property (nonatomic) long long currentSection;
@property (nonatomic) long long currentHintSection;
@property (nonatomic) long long currentCount;
@property (nonatomic) unsigned long long giftSendingBuffer;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) HTSLiveGiftItem *giftItem;
@property (retain, nonatomic) ComboHint *originComboHint;
@property (retain, nonatomic) HTSLiveUser *currentLoginUser;
@property (retain, nonatomic) IESLiveGiveGiftSequenceSender *giftSender;
@property (nonatomic) BOOL sendGiftOptimizeEnable;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (copy, nonatomic) id /* block */ onSend;
@property (copy, nonatomic) id /* block */ onEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_dismiss:(BOOL)a0;
- (void)didGiveGiftFailed:(id)a0 error:(id)a1;
- (BOOL)isBigGift;
- (void)impact;
- (void)updateComboInfosWithHint:(id)a0;
- (void)trackForComboShow;
- (void)increaseLongPressed;
- (void)trackForShowGiftComboClick;
- (void)increaseCount;
- (void)showHintHugeText;
- (void)increaseSection;
- (void)showHugeText;
- (void)trackForShowHintText;
- (void)allAnimationPlayFinished;
- (long long)currentComboCount;
- (id)giftModelInSequence;
- (long long)numberOfGiftsInSequence;
- (long long)giftSendTypeInSequence;
- (void)didConsumeGifts:(long long)a0;
- (id)initWithDataSharing:(id)a0 giftItem:(id)a1;
- (void)dismissForce;
- (void)tap:(id)a0;
- (void)longPress:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)dealloc;
- (void)loop;
- (void)setupUI;

@end
