@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWESharePerformanceManager : NSObject <AWESharePerformanceService>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, copy, nonatomic) NSDictionary *sharePanelConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sharePanelDataDisplayedWithViewModels:(id)a0 extra:(id)a1;
+ (id)createListInfoModel;
+ (void)uploadShareModelInfoWithShareModels:(id)a0 extra:(id)a1;
+ (id)sharedInstance;

- (void)p_uploadShareModelInfoWithShareModels:(id)a0 extra:(id)a1;
- (id)p_analysisCurrentListModels:(id)a0;
- (id)p_analysisCurrentListTypeInfo:(id)a0;
- (void)__async:(id /* block */)a0;
- (void)analysisAndReportSharePanelListDisplayedWithModels:(id)a0 loginUser:(id)a1 extra:(id)a2;
- (void)p_uploadDataWithShareModels:(id)a0 loginUser:(id)a1 extra:(id)a2;
- (id)p_analysisDiffFrom:(id)a0 to:(id)a1;
- (id)p_encodeSubMap:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
