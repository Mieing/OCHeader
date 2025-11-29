@interface TencentMessagePack : NSObject

+ (id)packTencentReqMessage:(id)a0 appId:(id)a1;
+ (id)packTencentRespMessage:(id)a0 platform:(unsigned long long)a1;
+ (id)dataWithTencentReqMessage:(id)a0;
+ (BOOL)messageVaild:(id)a0;

@end
