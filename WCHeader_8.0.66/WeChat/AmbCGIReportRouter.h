@class NSString, DataReportCGIReportRouter;

@interface AmbCGIReportRouter : NSObject <AmoebaDataRouterProtocol> {
    DataReportCGIReportRouter *m_cGIReportRouter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCallback:(id)a0 withTarget:(id)a1;
+ (void)unRegisterCallback:(id)a0 withTarget:(id)a1;

@end
