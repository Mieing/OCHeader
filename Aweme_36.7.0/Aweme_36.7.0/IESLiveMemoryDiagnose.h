@class NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveMemoryDiagnose : NSObject <IESLiveMemoryDiagnosesResident>

@property BOOL diagnose;
@property BOOL imageReadDone;
@property (retain, nonatomic) NSDictionary *mainZone;
@property (retain, nonatomic) NSDictionary *subZone;
@property (retain, nonatomic) NSMutableDictionary *residentDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memoryDiagnoseQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)loadAppClassWithComplete:(id /* block */)a0;
- (BOOL)shouldBeFilterTarget:(id)a0;
- (void)memoryResident:(id)a0;
- (id)aliveObjects;
- (id)memoryZoneHandler:(id)a0;
- (id)sortMemoryResident:(id)a0;
- (void)report;
- (id)init;

@end
