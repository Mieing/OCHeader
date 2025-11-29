@class IESECTabKitTabStyleModel, IESECTabKitTabBadgeConfigModel, NSString;

@interface IESECTabKitTabStyleConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECTabKitTabStyleModel *normalStyle;
@property (retain, nonatomic) IESECTabKitTabStyleModel *selectedStyle;
@property (retain, nonatomic) IESECTabKitTabBadgeConfigModel *badgeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
