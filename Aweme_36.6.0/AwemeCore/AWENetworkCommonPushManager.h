@class NSMutableDictionary, AWENetworkCommonPushConfig, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWENetworkCommonPushManager : NSObject {
    NSObject<OS_dispatch_queue> *p_serialQueue;
}

@property (retain, nonatomic) NSMutableDictionary *data_map;
@property (retain, nonatomic) NSMutableArray *booked_topic;
@property (nonatomic) BOOL isByteSyncStarted;
@property (retain, nonatomic) AWENetworkCommonPushConfig *currentConfig;

+ (id)sharedInstance;

- (void)setupWithConfig:(id)a0;
- (void)handleByteSyncDataCallBack:(id)a0 businessID:(long long)a1;
- (void)addLogWithType:(id)a0 model:(id)a1 error:(id)a2;
- (void)startCommonPush;
- (void)endCommonPush;
- (BOOL)registerLister:(id)a0;
- (BOOL)unRegisterLister:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
