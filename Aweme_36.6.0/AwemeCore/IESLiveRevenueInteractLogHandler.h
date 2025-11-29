@protocol IESLiveRevenueInteractLinkerProvider;

@interface IESLiveRevenueInteractLogHandler : NSObject

@property (weak, nonatomic) id<IESLiveRevenueInteractLinkerProvider> provider;

- (void)didSetAttachingDIContext;
- (void)logInfoWithCategory:(unsigned long long)a0 event:(id)a1 extra:(id)a2;
- (void)logErrorWithCategory:(unsigned long long)a0 event:(id)a1 extra:(id)a2;
- (void)logWithLevel:(unsigned long long)a0 category:(unsigned long long)a1 event:(id)a2 extra:(id)a3;
- (id)linkerStatusStr;
- (id)rtcStatusStr;
- (id)completeAlogWithCategory:(unsigned long long)a0 event:(id)a1;
- (void).cxx_destruct;

@end
