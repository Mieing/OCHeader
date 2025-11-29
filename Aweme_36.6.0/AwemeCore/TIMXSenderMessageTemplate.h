@class NSString, NSDictionary, NSArray, NSDate;
@protocol TIMXReferMessageInfoProtocol;

@interface TIMXSenderMessageTemplate : MTLModel <TIMXSendTemplateModelProtocol, TIMXSendTemplateModelGeneratorProtocol, TIMXInstanceScopeAlwaysNewDIComponent>

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSString *conversation;
@property (copy, nonatomic) NSDictionary *clientExt;
@property (copy, nonatomic) NSArray *mentionedUsers;
@property (copy, nonatomic) NSString *preferredUUID;
@property (retain, nonatomic) NSDate *preferredDate;
@property (nonatomic) long long forceOrderIndex;
@property (nonatomic) long long forceSenderID;
@property (copy, nonatomic) NSString *forceSenderSecID;
@property (nonatomic) BOOL skipRealSend;
@property (nonatomic) long long statusIfSkipRealSend;
@property (nonatomic) BOOL writeDBSync;
@property (copy, nonatomic) NSDictionary *files;
@property (copy, nonatomic) NSDictionary *userDefinedPropertyMap;
@property (retain, nonatomic) id<TIMXReferMessageInfoProtocol> referMessageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
