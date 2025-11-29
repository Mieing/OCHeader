@class NSString, NSArray;

@interface ACCTextErrorMatchesModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long length;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSArray *replacements;
@property (copy, nonatomic) NSString *sentence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replacementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
