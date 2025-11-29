@class NSMutableDictionary, TTVideoEngineSTSAuth, TTVideoEngineTimeCalibration, NSRunLoop;
@protocol TTVideoEngineAuthTimerProtocol;

@interface TTVideoEngineAuthTimer : NSObject

@property (retain, nonatomic) TTVideoEngineTimeCalibration *timeCalibration;
@property (retain, nonatomic) TTVideoEngineSTSAuth *stsAuth;
@property (retain, nonatomic) NSRunLoop *currentRunLoop;
@property (retain, nonatomic) NSMutableDictionary *stsAuthDic;
@property (retain, nonatomic) NSMutableDictionary *stsTimerDic;
@property (weak, nonatomic) id<TTVideoEngineAuthTimerProtocol> delegate;
@property (nonatomic) long long continuousExpCount;

+ (long long)getSeconds:(id)a0 Pattern:(id)a1;
+ (id)sharedInstance;

- (void)postUpdate:(id)a0 timeToUpdate:(long long)a1;
- (void)notifyUpdate:(id)a0;
- (void)setAuth:(id)a0 projectTag:(id)a1 stopUpdate:(BOOL)a2;
- (id)getAuth:(id)a0;
- (void)setAuthTimerListener:(id)a0;
- (void).cxx_destruct;
- (void)setTag:(id)a0;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
