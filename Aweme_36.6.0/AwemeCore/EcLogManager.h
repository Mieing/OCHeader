@protocol EcLogProtocol;

@interface EcLogManager : NSObject

@property (weak, nonatomic) id<EcLogProtocol> logDelegate;

+ (id)shareInstance;

- (void)updateLogDelegate:(id)a0;
- (void).cxx_destruct;
- (void)debug:(id)a0;
- (void)info:(id)a0;

@end
