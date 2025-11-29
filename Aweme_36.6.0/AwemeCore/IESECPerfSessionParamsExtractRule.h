@class NSString;

@interface IESECPerfSessionParamsExtractRule : NSObject

@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) NSString *redirectName;
@property (nonatomic) BOOL addCommonParams;
@property (nonatomic) unsigned long long strategy;

+ (id)modelPropertyBlacklist;
+ (id)modelCustomPropertyMapper;
+ (id)strategyMap;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
