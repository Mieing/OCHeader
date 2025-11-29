@class NSDictionary;

@interface LMTRouterQueryModel : NSObject

@property (retain, nonatomic) NSDictionary *queryItems;

- (id)containerBgColor;
- (id)apiURL;
- (id)maskBgColor;
- (id)anchorURL;
- (id)anchorTag;
- (BOOL)isPopup;
- (BOOL)sideSlipReturn;
- (long long)watchOffsetFPS;
- (unsigned long long)apiMethod;
- (id)apiDslKey;
- (id)apiBodyParams;
- (void).cxx_destruct;
- (double)radius;
- (id)initWithQueryItems:(id)a0;
- (double)containerHeight;

@end
