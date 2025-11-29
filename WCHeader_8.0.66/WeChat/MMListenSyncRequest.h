@class BaseRequest, NSString, NSData;

@interface MMListenSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *syncId;
@property (retain, nonatomic) NSData *syncBuff;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSData *syncCtxsBuffer;

+ (void)initialize;

@end
