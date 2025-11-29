@class NSString;

@interface DataReportEventCallbackRouter : NSObject <DataReportReportCallbackExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)onDataReport:(id)a0 time:(unsigned long long)a1 params:(id)a2 routeRule:(id)a3;
- (unsigned long long)routeType;

@end
