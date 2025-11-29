@class LynxContext, NSDictionary;

@interface LynxServiceInfo : NSObject

@property (weak, nonatomic) LynxContext *context;
@property (retain, nonatomic) NSDictionary *extra;

- (id)bpea_pageContext;
- (id)bpea_apiContext;
- (void).cxx_destruct;

@end
