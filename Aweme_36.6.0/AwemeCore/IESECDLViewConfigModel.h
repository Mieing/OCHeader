@class NSString;

@interface IESECDLViewConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *layout;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *layoutType;
@property (copy, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
