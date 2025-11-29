@class NSString;

@interface AWELiveJumpOutReportServiceIMP : NSObject <IESLiveJumpOutReportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)jumpOutReportToken:(id)a0 entity:(id)a1 bizParams:(id)a2 monitorParams:(id)a3 completion:(id /* block */)a4;

@end
