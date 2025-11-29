@class NSString, IESECTabKitTabBarStyleModel, IESECTabKitTabBarIndicatorStyle;

@interface IESECTabKitTabBarStyleConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double height;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) unsigned long long displayMode;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) IESECTabKitTabBarStyleModel *normalStyle;
@property (retain, nonatomic) IESECTabKitTabBarStyleModel *selectedStyle;
@property (retain, nonatomic) IESECTabKitTabBarIndicatorStyle *indicatorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
