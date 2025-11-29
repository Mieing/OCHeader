@interface WCColorProperties : NSObject

@property (nonatomic) long long colorPrimaries;
@property (nonatomic) long long colorTransferCharacteristic;
@property (nonatomic) long long colorSpace;
@property (nonatomic) long long colorRange;

+ (id)colorPropertiesWithABAColor:(struct WXColorProperties { int x0; int x1; int x2; int x3; })a0;
+ (id)colorPropertiesWithABADict:(id)a0;

- (id)initWithColorPrimaries:(long long)a0 colorTransferCharacteristic:(long long)a1 colorSpace:(long long)a2 colorRange:(long long)a3;
- (BOOL)isDisplayP3;

@end
