@class NSString;

@interface IESLiveDataSyncAnonymousSubscriber : NSObject <IESLiveDataSyncInternalDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *syncKey;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) double realWaitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (id)initWithKey:(id)a0 completion:(id /* block */)a1;
- (void)trackWaitTime:(BOOL)a0;
- (void)subscribedKey:(id)a0 withValue:(id)a1 version:(long long)a2;
- (void)subscribedKeyUpdated:(id)a0 withValue:(id)a1 oldVersion:(long long)a2 newVersion:(long long)a3;
- (void)toldTimeout;
- (void).cxx_destruct;

@end
