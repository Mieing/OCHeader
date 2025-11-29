@class AWEIMMessage, NSDictionary, NSString, NSArray, IESIMSendMessageSecurityCheckContext;

@interface IESIMSendMessageModel : NSObject

@property (copy, nonatomic) id /* block */ passThroughTrackParamsBlock;
@property (retain, nonatomic) AWEIMMessage *originSendMessage;
@property (copy, nonatomic) NSDictionary *sendContext;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDictionary *messageContentDict;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (copy, nonatomic) NSDictionary *clientExt;
@property (copy, nonatomic) NSString *preferMessageId;
@property (nonatomic) double preferCreateTime;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL isForward;
@property (copy, nonatomic) NSArray *mentionUsers;
@property (nonatomic) BOOL skipRealSend;
@property (nonatomic) BOOL notSaveToDB;
@property (nonatomic) long long markStatus;
@property (copy, nonatomic) NSString *overrideMessageID;
@property (nonatomic) long long forceSenderID;
@property (copy, nonatomic) NSString *forceSenderSecID;
@property (nonatomic) long long forceOrderIndex;
@property (nonatomic) long long referServerMessageID;
@property (nonatomic) long long referMessageType;
@property (copy, nonatomic) NSString *referMessageHint;
@property (copy, nonatomic) NSDictionary *userDefinedPropertyMap;
@property (nonatomic) BOOL writeDBSync;
@property (retain, nonatomic) IESIMSendMessageSecurityCheckContext *securityCheckContext;

- (id)initWithConversationId:(id)a0;
- (void).cxx_destruct;

@end
