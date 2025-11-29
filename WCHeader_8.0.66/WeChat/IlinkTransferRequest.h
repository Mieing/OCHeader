@class BaseRequest, NSData;

@interface IlinkTransferRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *ilinkRequest;

+ (void)initialize;

- (void)setIlinkRequest:(id)a0;
- (id)ilinkRequest;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
