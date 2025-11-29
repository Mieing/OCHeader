@class NSString, NSMutableArray;

@interface FurionFactorGroupRegisterInfo : NSObject <PTYFeatureGroup>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *mutFactorRegisters;
@property (nonatomic) unsigned long long cacheType;
@property (retain, nonatomic) NSString *dataSourceName;
@property (retain, nonatomic) NSString *groupName;
@property (copy, nonatomic) id /* block */ trackEventsGetter;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)featureDescriptions;
- (id)trackEvents;
- (id)factorRegisters;
- (void)registerFactor:(id /* block */)a0;
- (void)registerFactors:(id)a0;
- (void)registerFactorsWithNames:(id)a0 registerTemplate:(id /* block */)a1;
- (unsigned long long)ptyDataTypeFromFurionDataType:(unsigned long long)a0 factorType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0;

@end
