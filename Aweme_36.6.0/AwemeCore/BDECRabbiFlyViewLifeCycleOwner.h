@class NSArray, NSString, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyViewLifeCycleOwner : NSObject <BDECRabbiFlyIViewLifeCycleOwner>

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (copy, nonatomic) NSArray *lifeCycleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
