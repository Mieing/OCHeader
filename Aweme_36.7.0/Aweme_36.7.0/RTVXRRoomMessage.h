@class RTVXRRoomMessageMonitorInfo, NSDictionary, NSString, NSArray;

@interface RTVXRRoomMessage : NSObject

@property (readonly, nonatomic) RTVXRRoomMessageMonitorInfo *monitorInfo;
@property (readonly, copy, nonatomic) NSDictionary *extraBizMonitorInfo;
@property (readonly, nonatomic) long long rtmMessageID;
@property (copy, nonatomic) NSDictionary *messageContentDictionary;
@property (retain, nonatomic) RTVXRRoomMessageMonitorInfo *monitorInfo;
@property (copy, nonatomic) NSDictionary *extraBizMonitorInfo;
@property (nonatomic) long long rtmMessageID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) unsigned long long messageMethod;
@property (readonly, copy, nonatomic) NSString *senderID;
@property (readonly, copy, nonatomic) NSArray *targetUserIDs;
@property (readonly, nonatomic) long long messageChannel;
@property (readonly, nonatomic) long long messageSource;

+ (id)seiMessageKeyWithMessageType:(long long)a0;

- (id)initWithContent:(id)a0 targetIDs:(id)a1 messageSource:(long long)a2;
- (id)contentWithContentClass:(Class)a0;
- (void)updateMessageSendChannel:(long long)a0;
- (id)initWithContent:(id)a0 targetIDs:(id)a1 messageSource:(long long)a2 messageSendChannel:(long long)a3;
- (void)updateExtraBizMonitorInfo:(id)a0;
- (id)wsMessageSendJson;
- (id)initWithContent:(id)a0 targetID:(id)a1;
- (id)__monitorInfoFromDict:(id)a0;
- (id)rtmMesageSendData;
- (id)rtmMesageSendJson;
- (id)initWithReceveRTMMessage:(id)a0 fromSenderID:(id)a1 messageSource:(long long)a2;
- (id)initWithSEIMessage:(id)a0 type:(id)a1;
- (id)initWithReceiveWSMessage:(id)a0 messageType:(long long)a1;
- (id)seiMessageSendParamsAndKey;
- (void)updateMonitorInfo:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
