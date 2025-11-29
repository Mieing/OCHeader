@class NSMutableDictionary;

@interface LynxWebViewService : NSObject

@property (retain, nonatomic) NSMutableDictionary *providers;

+ (id)sharedInstance;

- (id)createLynxWebViewLoaderWithKey:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
