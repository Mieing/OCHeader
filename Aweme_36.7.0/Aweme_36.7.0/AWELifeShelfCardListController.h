@class NSArray, NSString;

@interface AWELifeShelfCardListController : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *labelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rawModelFromJsonString:(id)a0;
+ (id)labelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
