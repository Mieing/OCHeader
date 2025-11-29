@class NSString, NSDictionary, BDECRabbiFlyDynamicSupervisor;
@protocol BDECRabbiFlyIJSWorker;

@interface BDECRabbiFlyClientResponseJSModule : NSObject <JSModule, BDECRabbiFlyIJSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (weak, nonatomic) id<BDECRabbiFlyIJSWorker> jsWorker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
