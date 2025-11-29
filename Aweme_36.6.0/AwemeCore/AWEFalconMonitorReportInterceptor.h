@class NSString;

@interface AWEFalconMonitorReportInterceptor : NSObject <IESFalconMonitorInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didGetMetaData:(id)a0 forRequest:(id)a1 isGetMethod:(BOOL)a2 isCustomInterceptor:(BOOL)a3;

@end
