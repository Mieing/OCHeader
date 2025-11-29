@class AWEIMUser, AWEIMMessage, NSString;

@interface AWEIMMessageQuoteDataComponent : AWEIMFlexComponent <AWEIMMessageQuoteDataInterface>

@property (retain, nonatomic) Class originMessageCompClass;
@property (retain, nonatomic) AWEIMUser *originMessageSenderUser;
@property (retain, nonatomic) AWEIMMessage *originMessage;
@property (nonatomic) BOOL isFullOriginMessage;
@property (copy, nonatomic) NSString *invisibleString;
@property (nonatomic) BOOL isInvisible;
@property (nonatomic) BOOL isNegativeFold;
@property (nonatomic) long long lastQuoteReplyMessageStatus;
@property (nonatomic) BOOL contentIsAvailable;
@property (copy, nonatomic) NSString *lastBizInvisibleStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)didTapQuoteBody;
- (void)p_loadOriginMessageCompClass:(id)a0;
- (void)p_fetchOriginMessageSender;
- (void)p_loadFullOriginMessage;
- (void)checkInvisibleStatusWithOriginMessage:(id)a0;
- (void)p_updateInvisible:(BOOL)a0 invisibleString:(id)a1;
- (void).cxx_destruct;
- (id)currentMessage;

@end
