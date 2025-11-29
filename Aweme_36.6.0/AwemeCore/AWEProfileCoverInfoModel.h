@class NSArray, NSString;

@interface AWEProfileCoverInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *coverList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
