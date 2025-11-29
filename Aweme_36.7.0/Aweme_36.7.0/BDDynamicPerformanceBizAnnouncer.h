@class NSString;

@interface BDDynamicPerformanceBizAnnouncer : BDDynamicPerformanceBaseAnnouncer <BDDPBizDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)demoForCustomDidReceiveMemeoryWarning:(id)a0;

@end
