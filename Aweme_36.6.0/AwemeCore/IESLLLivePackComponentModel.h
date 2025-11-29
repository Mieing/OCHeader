@class NSNumber, IESLLLiveContentModel, NSString;

@interface IESLLLivePackComponentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLLiveContentModel *contentModel;
@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
