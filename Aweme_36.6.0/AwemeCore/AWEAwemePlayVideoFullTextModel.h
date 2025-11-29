@class NSArray, NSString;

@interface AWEAwemePlayVideoFullTextModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) NSString *buttonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
