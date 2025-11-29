@class NSString;

@interface AWETeenModeAlertOptContentMaterialModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *logoImage;
@property (copy, nonatomic) NSString *backgroundImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
