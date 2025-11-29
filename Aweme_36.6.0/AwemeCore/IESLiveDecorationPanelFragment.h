@class HTSLiveExpandToolbarItem, NSArray, NSTimer, NSDictionary, IESEffectModel, HTSLiveItemDotInfo, NSString;

@interface IESLiveDecorationPanelFragment : IESLiveRoomComponent <IESLiveDecorationPanelInterface, IESLiveGuideDotBubbleHandler>

@property (nonatomic) BOOL isPKMode;
@property (nonatomic) BOOL isBubbleShow;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *decorationItem;
@property (retain, nonatomic) IESEffectModel *recommandEffect;
@property (retain, nonatomic) IESEffectModel *neweff;
@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) NSDictionary *showTimeDict;
@property (retain, nonatomic) HTSLiveItemDotInfo *mainDot;
@property (retain, nonatomic) NSArray *subDots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (void)showBubbleIfNeeded;
- (void)showDecorationItem:(BOOL)a0;
- (void)changeEffectItemToNormalStatus;
- (void)changerEffectItemToImage:(id)a0 clickAction:(id /* block */)a1;
- (void)changeRedDotState:(id)a0;
- (void)receiveItemDotInfo:(id)a0 subRedDots:(id)a1;
- (void)receiveItemBubbleInfo:(id)a0;
- (void)setupAudioSettingEntrance;
- (void)stopAliveTimer;
- (void)changeToFaceStickerIcon:(id)a0 completion:(id /* block */)a1;
- (void)changetoNormalState;
- (void)showDecorationPanelView;
- (BOOL)shouldShowBubbleNewDecoration;
- (BOOL)shouldShowBubbleNewAnchor;
- (void)showBubbleViewWithType:(unsigned long long)a0 tip:(id)a1;
- (void)bubbleViewDidShowWithType:(unsigned long long)a0;
- (void)trackAnchorDecorateClick;
- (void).cxx_destruct;
- (void)startTimer;
- (BOOL)isClickEnabled;

@end
