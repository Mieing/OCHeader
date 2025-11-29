@class NSString, NSArray;

@interface AWEHPTabGuidePitayaResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *awemeResultList;
@property (copy, nonatomic) NSString *pitayaTraceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeResultListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
