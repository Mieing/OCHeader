@class NSString;

@interface AWEHPTopTabEditPanelConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *orderChangeSuccessToastContent;
@property (copy, nonatomic) NSString *unmovableToastContent;
@property (copy, nonatomic) NSString *confirmButtonContent;
@property (copy, nonatomic) NSString *editPanelTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
