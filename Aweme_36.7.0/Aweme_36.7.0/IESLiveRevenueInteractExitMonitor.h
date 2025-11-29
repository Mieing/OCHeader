@class NSString;

@interface IESLiveRevenueInteractExitMonitor : NSObject <HMDAPPExitReasonDetectorProtocol>

@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (id)currentCacheKey;
- (id)interactProvider;
- (id)initWithDIContext:(id)a0 fromScene:(unsigned long long)a1;
- (void)saveCacheInfo;
- (void)deleteCacheInfo;
- (void)reportCacheInfoWithRawReason:(int)a0 desc:(id)a1;

@end
