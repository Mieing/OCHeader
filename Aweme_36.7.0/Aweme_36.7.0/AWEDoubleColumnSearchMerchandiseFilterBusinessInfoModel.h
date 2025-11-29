@class NSString, NSDictionary;

@interface AWEDoubleColumnSearchMerchandiseFilterBusinessInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *logText;
@property (copy, nonatomic) NSString *conditionField;
@property (copy, nonatomic) NSString *conditionValue;
@property (nonatomic) long long maxInterval;
@property (nonatomic) long long minInterval;
@property (copy, nonatomic) NSDictionary *logInfo;
@property (copy, nonatomic) NSString *dataID;
@property (copy, nonatomic) NSString *extraDataString;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) long long needMutex;
@property (nonatomic) unsigned long long filterAndSortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
