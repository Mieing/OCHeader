@class NSArray, NSString;

@interface AWEAdInteractiveVideoResponseDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *awemeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
