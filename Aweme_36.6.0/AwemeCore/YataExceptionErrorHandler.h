@protocol YataInstanceInnerInterface;

@interface YataExceptionErrorHandler : NSObject

@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;

- (id)initWithYataInstance:(id)a0;
- (void)innerOnError:(id)a0;
- (void)removeErrorDuplicates:(id)a0;
- (BOOL)isHitBlackList:(id)a0 yataInstance:(id)a1;
- (void)trackError:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)onError:(id)a0;

@end
