@class DUXButtonBaseUIConfigModel, NSString;

@interface DUXCapsuleButtonUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DUXButtonBaseUIConfigModel *tinyStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
