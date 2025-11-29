@class NSString;

@interface TIMXHTTPRequest : TIMXRequest

@property (retain, nonatomic) NSString *logToken;

- (Class)responseSerializer;
- (Class)requestSerializer;
- (void)send;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
