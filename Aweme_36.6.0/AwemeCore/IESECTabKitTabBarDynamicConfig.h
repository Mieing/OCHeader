@class NSString;

@interface IESECTabKitTabBarDynamicConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bundleURL;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) double preferredHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
