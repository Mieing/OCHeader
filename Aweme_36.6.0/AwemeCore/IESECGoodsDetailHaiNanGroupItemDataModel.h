@class IESECTextElement, NSArray, NSString;

@interface IESECGoodsDetailHaiNanGroupItemDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECTextElement *groupName;
@property (copy, nonatomic) NSArray *groupTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupTipsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
