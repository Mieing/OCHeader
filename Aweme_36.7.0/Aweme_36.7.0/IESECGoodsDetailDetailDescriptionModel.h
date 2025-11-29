@class NSArray, NSString;

@interface IESECGoodsDetailDetailDescriptionModel : MTLModel <MTLJSONSerializing, IESECGoodsDetailQAUIProtocol>

@property (copy, nonatomic) NSArray *contents;
@property (nonatomic) long long UIType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *links;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)linksDict;
- (void).cxx_destruct;
- (id)content;

@end
