@class NSString, AWEEcomAISearchResultInputBoxModel;

@interface AWEEcomAISearchResultSuspensionLayer : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEEcomAISearchResultInputBoxModel *inputBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inputBoxJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
