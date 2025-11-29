@class NSString;

@interface AWEAnchorStyleInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *defaultIcon;
@property (copy, nonatomic) NSString *sceneIcon;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
