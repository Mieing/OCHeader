@class BaseRequest;

@interface BypInfoBizSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long synckeyValue;
@property (nonatomic) int scene;

+ (void)initialize;

- (void)setScene:(int)a0;
- (int)scene;
- (void)setSynckeyValue:(unsigned long long)a0;
- (unsigned long long)synckeyValue;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
