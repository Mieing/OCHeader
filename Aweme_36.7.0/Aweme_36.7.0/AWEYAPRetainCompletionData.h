@class NSDictionary, NSString;

@interface AWEYAPRetainCompletionData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *serverParams;
@property (copy, nonatomic) NSDictionary *teaParams;
@property (copy, nonatomic) NSDictionary *uiParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
