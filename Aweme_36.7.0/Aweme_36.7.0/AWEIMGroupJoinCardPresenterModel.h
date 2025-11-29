@class NSArray, NSString;

@interface AWEIMGroupJoinCardPresenterModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *functionsModel;
@property (copy, nonatomic) NSArray *containTypes;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)functionsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
