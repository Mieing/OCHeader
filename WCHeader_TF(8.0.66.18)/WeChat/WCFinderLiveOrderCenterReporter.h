@class WCFinderDataItem, WCFinderLiveAudienceComodityLogReporter, NSString;

@interface WCFinderLiveOrderCenterReporter : NSObject <MMOrderCenterReporter>

@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter;
@property (readonly, nonatomic) NSString *entrySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderDataItem:(id)a0 underlyingReporter:(id)a1;
- (void)reportEvent:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;

@end
