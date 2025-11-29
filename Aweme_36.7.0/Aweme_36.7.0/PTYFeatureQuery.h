@class NSString, NSDictionary;

@interface PTYFeatureQuery : NSObject

@property (retain, nonatomic) NSString *insKeyName;
@property (retain, nonatomic) NSString *featureName;
@property (retain, nonatomic) NSString *subFeatureName;
@property (nonatomic) unsigned long long qType;
@property (nonatomic) unsigned long long rType;
@property (nonatomic) unsigned long long n;
@property (retain, nonatomic) NSDictionary *extParams;

- (void).cxx_destruct;

@end
