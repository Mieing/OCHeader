@class NSNumber, NSString, AWEURLModel;

@interface AWEProfileCommerceTaskModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWEURLModel *headImageUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headImageUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
