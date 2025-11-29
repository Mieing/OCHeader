@class NSString;

@interface IESECTabKitTabBarStyleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long fontSize;
@property (nonatomic) unsigned long long fontWeight;
@property (nonatomic) unsigned long long imageWidth;
@property (nonatomic) unsigned long long imageHeight;
@property (copy, nonatomic) NSString *titleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
