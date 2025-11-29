@class NSString, BDPCDDynamicCardParserConfig, BDPCDDynamicCardTemplateModel, NSDictionary;

@interface AWEECOMIMChatListTopNotifyCardModel : NSObject

@property (nonatomic) long long supportSDKVersion;
@property (retain, nonatomic) BDPCDDynamicCardParserConfig *config;
@property (retain, nonatomic) BDPCDDynamicCardTemplateModel *templateModel;
@property (copy, nonatomic) NSString *sceneStr;
@property (copy, nonatomic) NSString *serverMessageID;
@property (copy, nonatomic) NSDictionary *extDict;

+ (void)updateDynamicCardRegisterService;
+ (id)elementHelper;

- (id)trackCommonParams;
- (id)msgCommonTrackParams;
- (id)getPathForTemplateCardHttpRequest:(id)a0;
- (void)generateTemplateModel;
- (id)initWithDict:(id)a0 groupId:(id)a1;
- (void).cxx_destruct;

@end
