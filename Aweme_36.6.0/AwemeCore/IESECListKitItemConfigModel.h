@class NSString, IESECListKitLynxCardConfigModel;

@interface IESECListKitItemConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECListKitLynxCardConfigModel *lynxConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lynxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
