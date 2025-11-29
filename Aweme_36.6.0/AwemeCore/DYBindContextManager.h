@class DYBindContext;

@interface DYBindContextManager : NSObject

@property (retain, nonatomic) DYBindContext *bindContext;

+ (id)sharedInstance;

- (void)startBindContext:(id)a0;
- (void)finishAndCallBlock:(BOOL)a0;
- (BOOL)closeReBindVCWithCurrentVC:(id)a0;
- (void).cxx_destruct;
- (void)finish;

@end
