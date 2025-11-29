@class NSString;
@protocol IESLiveFullLinkMonitor, IESLiveRevenueInteractFullLinkMonitorDelegate;

@interface IESLiveRevenueInteractFullLinkMonitor : NSObject

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) unsigned long long module;
@property (copy, nonatomic) NSString *servicePrefixString;
@property (weak, nonatomic) id<IESLiveRevenueInteractFullLinkMonitorDelegate> delegate;

- (id)initWithDIContext:(id)a0;
- (void)monitorResponse:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3 extra:(id)a4;
- (void)monitorMessage:(id)a0 extra:(id)a1;
- (void)monitorBusinessName:(id)a0 extra:(id)a1;
- (id)baseMonitorParams;
- (void)monitorWithJSON:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3 extra:(id)a4;
- (void)monitorWithPB:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3 extra:(id)a4;
- (void)appendResponseDictWith:(id)a0 apiJSONResponse:(id)a1;
- (void)appendResponseDictWith:(id)a0 apiPBResponse:(id)a1;
- (void).cxx_destruct;

@end
