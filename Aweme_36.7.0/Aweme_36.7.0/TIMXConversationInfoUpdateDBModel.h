@protocol TIMXSubConversationModelProtocol, TIMXConversationModelProtocol, TIMXConversationCoreInfoModelProtocol, TIMXConversationSettingsInfoModelProtocol, TIMXConversationLocalInfoModelProtocol;

@interface TIMXConversationInfoUpdateDBModel : NSObject

@property (retain, nonatomic) id<TIMXConversationModelProtocol> conv;
@property (retain, nonatomic) id<TIMXConversationCoreInfoModelProtocol> coreInfo;
@property (retain, nonatomic) id<TIMXConversationSettingsInfoModelProtocol> settingsInfo;
@property (retain, nonatomic) id<TIMXConversationLocalInfoModelProtocol> localInfo;
@property (retain, nonatomic) id<TIMXSubConversationModelProtocol> subConversation;

- (id)initWithConv:(id)a0 coreInfo:(id)a1 settingsInfo:(id)a2 localInfo:(id)a3 subConversation:(id)a4;
- (void).cxx_destruct;

@end
