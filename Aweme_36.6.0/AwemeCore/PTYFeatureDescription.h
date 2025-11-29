@class NSArray, NSString;

@interface PTYFeatureDescription : PTYMetaFeatureDescription

@property (nonatomic) unsigned long long featureSource;
@property (nonatomic) BOOL isDumpDB;
@property (nonatomic) unsigned long long maxCacheCount;
@property (retain, nonatomic) NSArray *subFeatures;
@property (nonatomic) unsigned long long divideTime;
@property (retain, nonatomic) NSString *startSessionEvent;
@property (retain, nonatomic) NSString *endSessionEvent;

- (void).cxx_destruct;

@end
