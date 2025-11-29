@class NSString;

@interface PTYMetaFeatureDescription : NSObject

@property (retain, nonatomic) NSString *featureName;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventFilter;
@property (retain, nonatomic) NSString *eventParamsFieldName;
@property (nonatomic) unsigned long long featureType;

- (void).cxx_destruct;

@end
