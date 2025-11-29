@class NSString, YYTextLayout, AWEDeliveryFooterTipsModel, UIImage, NSMutableAttributedString;
@protocol AWEECOMIMPaasConversationBridgeProtocol, AWEDeliveryMsgModelDataSource, AWEECOMIMPaasMessageBridgeProtocol;

@interface AWEDeliveryBaseMsgModel : NSObject <AWEDeliveryCellModelProtocol>

@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL isAssistant;
@property (copy, nonatomic) NSString *pigeonShopId;
@property (retain, nonatomic) id<AWEECOMIMPaasConversationBridgeProtocol> curConversation;
@property (retain, nonatomic) id<AWEECOMIMPaasMessageBridgeProtocol> message;
@property (nonatomic) BOOL isSendByMe;
@property (nonatomic) BOOL needRecalled;
@property (nonatomic) BOOL isRiskControlledLocal;
@property (nonatomic) long long messageSentStatus;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) id /* block */ onClickRecall;
@property (retain, nonatomic) YYTextLayout *footTextLayout;
@property (retain, nonatomic) NSMutableAttributedString *displayRiskContent;
@property (retain, nonatomic) YYTextLayout *riskTextLayout;
@property (copy, nonatomic) id /* block */ footHighLightClickBlock;
@property (copy, nonatomic) id /* block */ riskHighLightClickBlock;
@property (retain, nonatomic) AWEDeliveryFooterTipsModel *footerTipModel;
@property (nonatomic) BOOL isAggregation;
@property (nonatomic) long long aggregationStyle;
@property (nonatomic) double localModelCreateTime;
@property (copy, nonatomic) id /* block */ messageStatusUpdateBlock;
@property (retain, nonatomic) UIImage *cacheAvatarImage;
@property (nonatomic) BOOL shouldShowFoldedButton;
@property (nonatomic) BOOL isDisplayFullContent;
@property (nonatomic) double fullContentHeight;
@property (nonatomic) BOOL shouldUseModelCellHeight;
@property (weak, nonatomic) id<AWEDeliveryMsgModelDataSource> dataSource;
@property (copy, nonatomic) NSString *sceneStr;
@property (readonly, nonatomic) BOOL isMessageSending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })riskTextSizeWithModel:(id)a0;
+ (id)careNoticeMsgType;
+ (BOOL)isCareCard;
+ (id)messageModelFromMessage:(id)a0 belongingConversation:(id)a1;
+ (Class)cellClass;

- (double)baseCellTopAndBottomPaddingHeight;
- (void)configFootTextLayoutWithMessage:(id)a0;
- (void)_configRiskTextLayoutWithMessage:(id)a0;
- (double)footContentHeight;
- (double)currentDisplayCellTopPadding;
- (double)currentDisplayCellBottomPadding;
- (id)cardEventCommonTrackParams;
- (id)msgCommonTrackParams;
- (void)trackCardButtonTap:(id)a0 materialName:(id)a1 extParams:(id)a2 enterNewPage:(BOOL)a3;
- (void)trackMsgDisplayWithEventName:(id)a0 params:(id)a1;
- (void)trackMsgDisplayWithEventName:(id)a0;
- (void)bindIsRead:(BOOL)a0;
- (double)currentDisplayHeight;
- (double)currentBubbleViewDisplayHeight;
- (double)designMaxHeight;
- (void)reBuildCellFullContentHeight;
- (BOOL)hasRealMessageBody;
- (BOOL)checkIfSupportRecall;
- (id)removeRecallItem:(id)a0;
- (id)popMenuItems;
- (void)transferSchemaToSkip:(id)a0 andTrackButtonTap:(id)a1 materialName:(id)a2 extParams:(id)a3;
- (void)trackMsgDisplay;
- (void)trackMsgDetailDisplay;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessage:(id)a0;

@end
