@class WCFinderLiveAudienceComodityLogReporter, NSString;

@interface WCFinderOrderCenterReporter : NSObject <MMOrderCenterReporter>

@property (retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter;
@property (readonly, nonatomic) NSString *entrySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUnderlyingReporter:(id)a0;
- (void)reportEvent:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;

@end
