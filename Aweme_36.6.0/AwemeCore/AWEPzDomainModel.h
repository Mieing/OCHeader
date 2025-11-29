@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEPzDomainModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *componentList;
@property (copy, nonatomic) NSArray *strategyList;
@property (nonatomic) long long maxRecordCount;
@property (nonatomic) long long maxRecordTime;
@property (copy, nonatomic) NSString *dataHash;
@property (retain, nonatomic) NSNumber *domainStatus;
@property (retain, nonatomic) NSDictionary *rawDataValue;
@property (nonatomic) BOOL isFromOldCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentListJSONTransformer;
+ (id)strategyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
