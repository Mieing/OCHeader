@class NSString;

@interface DataReportCGIReportRouter : NSObject <DataReportReportCallbackExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCallback:(id)a0 withTarget:(id)a1;
+ (void)unRegisterCallback:(id)a0 withTarget:(id)a1;

- (id)callbackCgiReport:(unsigned long long)a0 andUdfKvMap:(id)a1 andEventId:(id)a2;
- (BOOL)onDataReport:(id)a0 time:(unsigned long long)a1 params:(id)a2 routeRule:(id)a3;
- (unsigned long long)routeType;
- (id)fixCgiParams:(id)a0;
- (BOOL)isRemovePageInfo;
- (id)removePageInfo:(id)a0;

@end
