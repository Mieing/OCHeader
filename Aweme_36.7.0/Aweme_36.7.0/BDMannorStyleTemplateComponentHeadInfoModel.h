@class NSString;

@interface BDMannorStyleTemplateComponentHeadInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *marketTag;
@property (copy, nonatomic) NSString *sellingTag;
@property (nonatomic) long long marketTagSourceId;
@property (nonatomic) long long sellingTagSourceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
