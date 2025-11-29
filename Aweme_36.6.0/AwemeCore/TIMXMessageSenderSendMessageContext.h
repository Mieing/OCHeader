@class NSString, TIMXConversationORM;
@protocol TIMXConversationModelProtocol, TIMXSendTemplateModelProtocol, TIMXMessageModelProtocol;

@interface TIMXMessageSenderSendMessageContext : NSObject

@property (retain, nonatomic) id<TIMXMessageModelProtocol> dbMessage;
@property (retain, nonatomic) id<TIMXConversationModelProtocol> conversation;
@property (retain, nonatomic) id<TIMXSendTemplateModelProtocol> messageTemplate;
@property (retain, nonatomic) TIMXConversationORM *dbConv;
@property (copy, nonatomic) NSString *identityToken;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL shouldNotBlock;

- (void).cxx_destruct;

@end
