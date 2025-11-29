@class NSString;

@interface ALSmartLink : NSObject {
    BOOL _bInit;
    BOOL _debugMode;
}

@property (retain, nonatomic) NSString *appKey;

+ (id)sharedInstance;

- (BOOL)tryOpenURI:(id)a0;
- (id)getH5DegradeUrlWithURI:(id)a0;
- (void)degradeWithURI:(id)a0 downloadURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDebugMode;
- (void)initWithAppkey:(id)a0;
- (void)openURI:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
