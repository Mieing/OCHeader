@class NSString, NSMutableDictionary;

@interface AWEPayNFCRedirectPreRequestManager : NSObject

@property (nonatomic) BOOL isInPreRequestProgress;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) NSMutableDictionary *preRequestCache;

+ (id)manager;

- (void)startPreRequestIfNeed:(id)a0 coldLaunchOptions:(id)a1;
- (unsigned long long)getPreRequestCache:(id)a0 callback:(id /* block */)a1;
- (void)preloadTimorIfNeed:(id)a0 coldLaunchOptions:(id)a1;
- (void)preDownloadTimor:(id)a0 url:(id)a1;
- (void)prepareTimor:(id)a0;
- (void).cxx_destruct;

@end
