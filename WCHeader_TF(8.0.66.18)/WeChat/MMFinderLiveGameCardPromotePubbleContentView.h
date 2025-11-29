@class NSString, MagicSclFrameSetView, MMUIView, GameDynamicBubbleContent;

@interface MMFinderLiveGameCardPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MagicLiveCardServiceExt>

@property (retain, nonatomic) MMUIView *dynamicCardContainer;
@property (retain, nonatomic) GameDynamicBubbleContent *gamePlayTogetherDynamicContent;
@property (retain, nonatomic) NSString *dynamicCardRootId;
@property (retain, nonatomic) MagicSclFrameSetView *frameSetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupDynamicCardEnv;
- (void)convertPromoteMsgInfo:(id)a0;
- (void)layoutUI;
- (void)refreshData;
- (void)onDismissed;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (id)currentPromoteItem;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (BOOL)disableTapGesture;
- (void)layoutDynamicCardContainer;
- (void)layoutDynamicCard;
- (void)onClosePlayTogetherActionSheet:(id)a0;
- (void)onFirstFrameRendered:(id)a0;
- (void).cxx_destruct;

@end
