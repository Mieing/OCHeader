@class NSString;

@interface IESECTabKitNavItemConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageColor;
@property (nonatomic) unsigned long long imageWidth;
@property (nonatomic) unsigned long long imageHeight;
@property (nonatomic) unsigned long long itemSpacing;
@property (nonatomic) unsigned long long fontSize;
@property (nonatomic) unsigned long long fontWeight;
@property (copy, nonatomic) NSString *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
