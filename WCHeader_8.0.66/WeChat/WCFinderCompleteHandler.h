@interface WCFinderCompleteHandler : NSObject

@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL success;

+ (id)handlerWithComplete:(id /* block */)a0;

- (void)dealloc;
- (void)commit:(BOOL)a0 userInfo:(id)a1;
- (void)_invokeComplete;
- (void)cancel;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
