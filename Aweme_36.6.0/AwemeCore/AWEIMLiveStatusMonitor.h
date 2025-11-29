@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMLiveStatusMonitor : MTLModel <AWELiveStatusMonitorProtocol, MTLJSONSerializing>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) long long index;
@property (nonatomic) long long chatType;
@property (nonatomic) BOOL isFansGroup;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) long long liveStatus;
@property (nonatomic) double fetchDataTimeStamp;
@property (readonly, nonatomic) BOOL enableFetch;
@property (copy, nonatomic) NSDictionary *btmParams;
@property (copy, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
