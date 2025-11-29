@class BaseRequest, NSData;

@interface GetDefaultRedpacketRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *localCacheBuffer;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
