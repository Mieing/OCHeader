@class NSString, AWEFlowerRedPacketViewModel, ACCBarItem;
@protocol ACCStickerServiceProtocol, ACCEditViewContainer, ACCEditVideoFilterServiceProtocol, ACCRichTextEditorServiceProtocol;

@interface AWEFlowerRedpacketComponent : ACCFeatureComponent <ACCDraftResourceRecoverProtocol>

@property (nonatomic) BOOL p_didLoadComponentView;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) AWEFlowerRedPacketViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditVideoFilterServiceProtocol> filterService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCBarItem *barItem;
@property (copy, nonatomic) NSString *markRouterCouponId;
@property (copy, nonatomic) NSString *schemaCache;
@property (weak, nonatomic) id<ACCRichTextEditorServiceProtocol> richTextEditorService;
@property (nonatomic) BOOL isCustomSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recoverBlocksForPublishModel:(id)a0;

- (void)componentDidAppear;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBinding;
- (void)p_updateAccessibilityLabel;
- (void)p_addBarItem;
- (void)parseAnswerQuestionRecordIfNeed;
- (void)setupFlowerRedPackEditIfEnable;
- (BOOL)p_showBarItemIfNeed;
- (void)p_syncRedpacketToDraft;
- (void)onReceiveOutOrderId:(id)a0 redPacketId:(id)a1 couponId:(id)a2 redPacketNum:(id)a3 extra:(id)a4 JSBCallback:(id /* block */)a5;
- (void)p_updateBarItem;
- (id)getRouterLynxQueryDict;
- (id)p_barItemImage;
- (void)onBarItemClick;
- (id)getBarItemView;
- (void).cxx_destruct;

@end
