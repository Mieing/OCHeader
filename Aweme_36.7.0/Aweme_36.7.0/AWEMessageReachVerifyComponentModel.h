@class NSString;

@interface AWEMessageReachVerifyComponentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
