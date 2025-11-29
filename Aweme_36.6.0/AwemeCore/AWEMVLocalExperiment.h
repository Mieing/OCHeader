@class NSString, NSArray, NSNumber;

@interface AWEMVLocalExperiment : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *percents;
@property (copy, nonatomic) NSArray *values;
@property (retain, nonatomic) NSNumber *baseVid;
@property (retain, nonatomic) NSNumber *minVersion;
@property (retain, nonatomic) NSNumber *maxVersion;
@property (copy, nonatomic) NSArray *excludedVersions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
