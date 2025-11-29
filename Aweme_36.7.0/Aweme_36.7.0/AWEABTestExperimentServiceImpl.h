@class NSString;

@interface AWEABTestExperimentServiceImpl : NSObject <AWEABTestExperimentService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getExperimentDataWithName:(id)a0 libraKey:(id)a1 defaultData:(id)a2 stable:(BOOL)a3;
- (id)getVidsWithName:(id)a0 libraKey:(id)a1 readStableCache:(BOOL)a2;

@end
