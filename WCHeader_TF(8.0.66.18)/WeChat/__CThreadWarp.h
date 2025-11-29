@interface __CThreadWarp : NSObject

@property (nonatomic) void /* function */ *m_funp;
@property (nonatomic) void /* function */ *m_fun;
@property (nonatomic) void *m_arg;

- (id)init;
- (void)Run;

@end
