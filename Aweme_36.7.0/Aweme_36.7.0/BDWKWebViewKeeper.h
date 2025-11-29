@class NSTimer, NSMutableArray;

@interface BDWKWebViewKeeper : NSObject

@property (retain, nonatomic) NSMutableArray *webViewList;
@property (nonatomic) float keepTs;
@property (retain, nonatomic) NSTimer *timer;

+ (id)shareInstance;

- (void)checkWebList;
- (void)keepWebView:(id)a0;
- (void).cxx_destruct;

@end
