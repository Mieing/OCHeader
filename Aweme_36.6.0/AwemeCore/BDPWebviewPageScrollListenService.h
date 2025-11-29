@class NSPointerArray, NSString;

@interface BDPWebviewPageScrollListenService : NSObject <BDPWebviewScrollListenProtocol>

@property (retain, nonatomic) NSPointerArray *listenerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)addWebviewScrollListener:(id)a0;
- (void)removeWebviewScrollListener:(id)a0;
- (void)notifyScrollViewDidEndScroll:(id)a0;
- (void)notifyScrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
