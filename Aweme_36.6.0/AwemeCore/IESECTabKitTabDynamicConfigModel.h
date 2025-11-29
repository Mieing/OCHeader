@class NSString, IESECTabKitTabApiConfigModel;

@interface IESECTabKitTabDynamicConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *bundleURL;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long containerType;
@property (retain, nonatomic) IESECTabKitTabApiConfigModel *apiConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredFrame;
@property (nonatomic) unsigned long long hybridContainerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
