@interface TenpayLogHooker : NSObject

@property (copy, nonatomic) id /* block */ logHooker;

+ (id)shareInstance;

- (void)setHooker:(id /* block */)a0;
- (id /* block */)getHooker;
- (void)writeLog:(id)a0;

@end
