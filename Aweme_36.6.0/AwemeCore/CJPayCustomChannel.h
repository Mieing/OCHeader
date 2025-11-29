@class NSString;

@interface CJPayCustomChannel : CJPayBasicChannel

@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) BOOL wakingApp;

+ (void)registerPlugin;

- (BOOL)canProcessWithURL:(id)a0;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appWillEnterForeground;

@end
