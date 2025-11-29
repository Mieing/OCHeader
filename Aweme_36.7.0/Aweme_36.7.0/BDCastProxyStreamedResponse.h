@class NSString;

@interface BDCastProxyStreamedResponse : BDCastGCDWebServerStreamedResponse

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) id /* block */ onClose;

- (void)performClose:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
