@class NSString, NSArray;

@interface BCMUnitModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long btmBcmVersionId;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) long long isAlive;
@property (copy, nonatomic) NSString *updateTime;
@property (nonatomic) long long valueType;
@property (nonatomic) long long paramType;
@property (copy, nonatomic) NSString *bcmFieldName;
@property (copy, nonatomic) NSArray *enumList;
@property (nonatomic) long long iosFlag;
@property (nonatomic) long long isRequired;
@property (copy, nonatomic) NSArray *relaVersionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
