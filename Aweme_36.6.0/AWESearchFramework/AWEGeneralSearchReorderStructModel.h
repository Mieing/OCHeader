@class NSString, NSArray;

@interface AWEGeneralSearchReorderStructModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *fp;
@property (copy, nonatomic) NSString *nodeId;
@property (copy, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;

- (void).cxx_destruct;

@end
