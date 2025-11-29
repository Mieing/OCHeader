@class NSURLSessionConfiguration, NSMutableArray, NSString;

@interface QMapNetworkSessionPool : NSObject <NSURLSessionDelegate> {
    int lock;
}

@property (retain, nonatomic) NSMutableArray *sessionPool;
@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSURLSessionConfiguration *configuration;
@property (nonatomic) unsigned long long sessionCount;
@property (nonatomic) BOOL dead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionPoolWithConfiguration:(id)a0 sessionCount:(unsigned long long)a1;

- (void)setupPool;
- (id)createSession;
- (void)removeSession:(id)a0;
- (id)initWithConfiguration:(id)a0 sessionCount:(unsigned long long)a1;
- (id)getSession;
- (void)finishTasksAndInvalidate;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void).cxx_destruct;

@end
