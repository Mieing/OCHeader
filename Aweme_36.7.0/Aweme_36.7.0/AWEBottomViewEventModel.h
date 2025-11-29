@class NSString, NSDictionary;

@interface AWEBottomViewEventModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
