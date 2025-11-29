@class NSString, AWEIMInputFAQModel;

@interface AWEIMInputFAQResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMInputFAQModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;
- (id)filterData;

@end
