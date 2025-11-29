@class NSArray, NSString;

@interface ACCExtractAIEnhanceTag : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *mainTag;
@property (copy, nonatomic) NSArray *subTag;
@property (copy, nonatomic) NSArray *displayTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
