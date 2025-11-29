@class DUXRectangleButtonUIConfig, DUXCapsuleButtonUIConfig, NSString, DUXFloatingButtonUIConfig, DUXTextButtonUIConfig;

@interface DUXButtonUIConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DUXRectangleButtonUIConfig *rectangleConfig;
@property (retain, nonatomic) DUXFloatingButtonUIConfig *floatingConfig;
@property (retain, nonatomic) DUXCapsuleButtonUIConfig *capsuleConfig;
@property (retain, nonatomic) DUXTextButtonUIConfig *textConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
