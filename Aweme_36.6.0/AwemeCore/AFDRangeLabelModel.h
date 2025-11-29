@class NSString;

@interface AFDRangeLabelModel : MTLModel <WCTTableCoding, MTLJSONSerializing>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) int labelDate;
@property (nonatomic) int readDate;
@property (nonatomic) long long fansCount;
@property (nonatomic) long long friendsCount;
@property (nonatomic) int publishActiveness;
@property (nonatomic) int imActiveness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)fansCount;
+ (const void *)imActiveness;
+ (const void *)labelDate;
+ (const void *)publishActiveness;
+ (const void *)readDate;
+ (const void *)friendsCount;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)notDefaultValueForType:(id)a0;
- (id)getValueForType:(id)a0;
- (void)addLabelValue:(id)a0 forType:(id)a1;
- (BOOL)noDefaultValue;
- (id)init;

@end
