@class NSMutableDictionary, NSString, NSDictionary, IESECPreconnectConfig, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface IESECPreconnectManager : NSObject <IESECPreconnectService>

@property (retain, nonatomic) NSMutableDictionary *taskMap;
@property (nonatomic) BOOL isLivekeepingAlive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) IESECPreconnectConfig *preconnectConfig;
@property (copy, nonatomic) NSString *portrait;
@property (nonatomic) BOOL isExecuting;
@property (retain, nonatomic) NSDate *backgroundEntryDate;
@property (nonatomic) BOOL isAPPEnterForeground;
@property (nonatomic) BOOL enablePreconnectQuic;
@property (copy, nonatomic) NSDictionary *preconnectQuicConfig;
@property (retain, nonatomic) NSMutableDictionary *lastPreconnectQuicTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)endKeepLiveWithBizScope:(unsigned long long)a0;
+ (void)startKeepLiveWithBizScope:(unsigned long long)a0;
+ (id)shareInstance;

- (void)endKeepLiveWithBizScope:(unsigned long long)a0;
- (void)startKeepLiveWithBizScope:(unsigned long long)a0;
- (void)handleAPPWillEnterForeground:(id)a0;
- (void)handleAPPDidEnterBackground:(id)a0;
- (void)preconnectUrlWithURL:(id)a0;
- (void)prepareConfig;
- (id)getPreconnectConfigWithBizScope:(unsigned long long)a0;
- (void)executTask;
- (id)getBizStringWithBizScope:(unsigned long long)a0;
- (void)p_preconnectUrlWithURL:(id)a0;
- (void)preconnectUrlWithURLString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
