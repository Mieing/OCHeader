@class BaseRequest, NSString;

@interface SnsTagListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) NSString *tagListMd5;

+ (void)initialize;

- (void)setTagListMd5:(id)a0;
- (id)tagListMd5;
- (void)setOpCode:(unsigned int)a0;
- (unsigned int)opCode;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
