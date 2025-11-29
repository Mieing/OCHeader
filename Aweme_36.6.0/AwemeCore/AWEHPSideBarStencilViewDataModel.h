@class NSString, AWELeftSideBarListCellLeftIconModel;

@interface AWEHPSideBarStencilViewDataModel : MTLModel <MTLJSONSerializing, AWEHPSideBarStencilViewDataModelProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWELeftSideBarListCellLeftIconModel *leftIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
