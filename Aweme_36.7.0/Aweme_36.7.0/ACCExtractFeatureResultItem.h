@class NSString, NSDictionary, NPMaterial_OC, NSArray;

@interface ACCExtractFeatureResultItem : NSObject

@property (retain, nonatomic) NPMaterial_OC *normalFeature;
@property (retain, nonatomic) NSDictionary *veFeatures;
@property (retain, nonatomic) NPMaterial_OC *feature;
@property (copy, nonatomic) NSString *featurePath;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic) BOOL fromCache;
@property (copy, nonatomic) NSArray *algorithms;
@property (copy, nonatomic) NSArray *frameTimes;
@property (copy, nonatomic) NSString *materialID;
@property (copy, nonatomic) NSString *materialRelativePath;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long source;
@property (nonatomic) struct CGSize { double width; double height; } materialSize;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
