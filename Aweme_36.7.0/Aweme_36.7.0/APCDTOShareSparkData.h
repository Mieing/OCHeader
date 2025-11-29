@class NSString;

@interface APCDTOShareSparkData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *selfName;
@property (copy, nonatomic) NSString *otherName;
@property (copy, nonatomic) NSString *selfUid;
@property (copy, nonatomic) NSString *otherUid;
@property (nonatomic) long long day;
@property (copy, nonatomic) NSString *reserved_kw_id;
@property (copy, nonatomic) NSString *spark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
