@class NSString;

@interface WADataReportServiceProxy : NSObject <IWADataReportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportCustomViewEvent:(id)a0 eventId:(id)a1 params:(id)a2 routeRule:(unsigned long long)a3;


@end
