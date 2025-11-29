@class NSArray, NSString;

@interface AWECodeGenLongPressPanelResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *panelConfigsModelArray;
@property (copy, nonatomic) NSArray *effectiveArray;
@property (copy, nonatomic) NSString *dataHash;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
