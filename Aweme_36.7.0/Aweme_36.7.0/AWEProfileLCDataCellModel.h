@class NSString;

@interface AWEProfileLCDataCellModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
