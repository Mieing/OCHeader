@class NSString, NSDictionary;

@interface IESECListKitLynxCardConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) double predictHeight;
@property (nonatomic) BOOL formModifiable;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
