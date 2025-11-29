@class NSNumber, NSString;

@interface IESLiveLinkmicSyncDataServiceImpl : NSObject <IESLiveLinkmicSyncDataService>

@property (retain, nonatomic) NSNumber *roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerMessageProcesser;
- (BOOL)enableDataSync;
- (BOOL)enableAPIDataSync;
- (void)fetchLinkmicSyncData:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
