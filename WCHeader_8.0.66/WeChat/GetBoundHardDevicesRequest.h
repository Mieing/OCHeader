@class BaseRequest;

@interface GetBoundHardDevicesRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int version;

+ (void)initialize;

- (void)setVersion:(unsigned int)a0;
- (unsigned int)version;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
