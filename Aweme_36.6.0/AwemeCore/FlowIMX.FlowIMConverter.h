@interface FlowIMX.FlowIMConverter : NSObject

+ (id)convertBotFrom:(id)a0;
+ (id)convertLocalMessageWithSenderId:(id)a0 content:(id)a1 serverIndex:(long long)a2 contentType:(long long)a3 localMessageId:(id)a4;
+ (id)convertMessageFromBody:(id)a0;
+ (long long)convertContentStatusFrom:(long long)a0;
+ (id)encodeWithSendRequest:(id)a0;
+ (id)encodePutMessageUplinkBodyWithSendRequest:(id)a0;
+ (id)convertConversationFrom:(id)a0;

- (id)init;

@end
