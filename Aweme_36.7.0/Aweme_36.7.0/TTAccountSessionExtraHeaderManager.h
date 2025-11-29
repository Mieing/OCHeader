@class NSString, NSMutableDictionary;

@interface TTAccountSessionExtraHeaderManager : NSObject <TTAccountMulticastProtocol>

@property (copy, nonatomic) NSMutableDictionary *savedHeaderFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveHeadersFromResponse:(id)a0;
+ (void)addSavedHeadersToRequest:(id)a0;
+ (BOOL)enableHandleExtraHeandlers;
+ (void)trackSessionResponse:(id)a0;
+ (id)sharedInstance;

- (void)saveHeadersFromResponse:(id)a0;
- (void)addSavedHeadersToRequest:(id)a0;
- (id)extraHeaderDescription;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
