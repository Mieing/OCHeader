@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXECOMDispatchStatisticsManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsQueue;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSMutableDictionary *taskCountMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
