@class NSArray, NSDictionary, NSString;

@interface AWEIMActionBarDynamicButton : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *dataType;
@property (copy, nonatomic) NSDictionary *extraDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
