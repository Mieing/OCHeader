@class DYPasswordContext;

@interface DYPasswordContextManager : NSObject

@property (retain, nonatomic) DYPasswordContext *passwordContext;

+ (id)sharedInstance;

- (void)startSetPasswordContext:(id)a0;
- (void)finishAndCallBlock:(BOOL)a0;
- (void).cxx_destruct;
- (void)finish;

@end
