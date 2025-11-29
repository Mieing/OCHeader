@interface IESECMessageDecoder : NSObject

+ (id)decodeJsonMessage:(id)a0 modelClass:(Class)a1 error:(id *)a2;
+ (id)decodeProtobufMessage:(id)a0 error:(id *)a1;
+ (id)p_IESECRecvMessageContentFormatString:(unsigned long long)a0;
+ (id)decodeMessage:(id)a0 error:(id *)a1;

@end
