@class NSString;

@interface ACCSocialStickeHashTagBindingModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hashTagName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithHashTagName:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
