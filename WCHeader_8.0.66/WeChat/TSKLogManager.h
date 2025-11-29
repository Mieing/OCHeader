@protocol TSKLogProtocol;

@interface TSKLogManager : NSObject

@property (retain, nonatomic) id<TSKLogProtocol> delegate;
@property (nonatomic) unsigned long long logLevels;

+ (id)sharedInstance;

- (id)init;
- (void)setLogDelegate:(id)a0 withLevels:(unsigned long long)a1;
- (void)logLevel:(unsigned long long)a0 inPosition:(struct _TSKLogPosition { char *x0; char *x1; int x2; })a1 withFormat:(id)a2;
- (void).cxx_destruct;

@end
