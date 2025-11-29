@class NSDictionary;

@interface ArgusRemoteConfigDataSource : NSObject

@property (retain, nonatomic) NSDictionary *data;
@property (nonatomic) long long configType;
@property (nonatomic) unsigned long long geckoVersion;
@property (nonatomic) long long dataSourceType;

- (id)datasourceTypeDesc;
- (void).cxx_destruct;
- (id)description;

@end
