@class NSString, MatrixPluginConfig;
@protocol MatrixPluginListenerDelegate;

@interface MatrixPlugin : NSObject <MatrixPluginProtocol>

@property (weak, nonatomic) id<MatrixPluginListenerDelegate> pluginListener;
@property (retain, nonatomic) MatrixPluginConfig *pluginConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTag;

- (void)setupPluginListener:(id)a0;
- (BOOL)start;
- (void)stop;
- (void)destroy;
- (void)reportIssue:(id)a0;
- (void)reportIssueCompleteWithIssue:(id)a0 success:(BOOL)a1;
- (void)reportError:(id)a0;
- (void).cxx_destruct;

@end
