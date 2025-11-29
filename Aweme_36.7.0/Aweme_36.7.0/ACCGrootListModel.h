@class NSArray, NSDictionary, NSString;

@interface ACCGrootListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *grootList;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)grootListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
