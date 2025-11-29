@protocol WXApiLogDelegate;

@interface WXLogUtil : NSObject

@property (copy, nonatomic) id /* block */ logBlock;
@property (nonatomic) long long logLevel;
@property (weak, nonatomic) id<WXApiLogDelegate> logDelegate;

+ (id)sharedInstance;

- (void)configLogBlock:(id /* block */)a0 level:(long long)a1;
- (void)configLogDelegate:(id)a0 level:(long long)a1;
- (void)removeLog;
- (void)printLog:(id)a0 level:(long long)a1;
- (void).cxx_destruct;

@end
