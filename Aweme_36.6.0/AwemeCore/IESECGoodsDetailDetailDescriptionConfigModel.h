@class NSArray, NSString;

@interface IESECGoodsDetailDetailDescriptionConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *mainContent;
@property (copy, nonatomic) NSString *mainTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
