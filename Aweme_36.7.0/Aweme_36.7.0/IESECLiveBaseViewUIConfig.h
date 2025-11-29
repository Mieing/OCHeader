@class NSString, NSArray;

@interface IESECLiveBaseViewUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSArray *radius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
