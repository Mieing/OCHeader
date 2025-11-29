@class DUXButtonBaseUIConfigModel, NSString;

@interface DUXFloatingButtonUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DUXButtonBaseUIConfigModel *largeStyle;
@property (retain, nonatomic) DUXButtonBaseUIConfigModel *middleStyle;
@property (retain, nonatomic) DUXButtonBaseUIConfigModel *smallStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
