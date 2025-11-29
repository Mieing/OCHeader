@class NSString, NSMutableArray;

@interface MMLiveMagicEngineResLoadTask : NSObject

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *targetUrl;
@property (retain, nonatomic) NSString *fileMD5;
@property (nonatomic) BOOL enforceIntegrityCheck;
@property (retain, nonatomic) NSMutableArray *callbackList;
@property (nonatomic) unsigned long long currLoadState;
@property (copy, nonatomic) id /* block */ loadStateChangeCallback;

- (id)initWithProductId:(id)a0 url:(id)a1 md5:(id)a2;
- (void)invokeCallbacksWithResult:(unsigned long long)a0 path:(id)a1;
- (void)updateLoadState:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
