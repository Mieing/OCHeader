@class NSArray, NSString;

@interface BDECPigeonMarkdownData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *lines;
@property (copy, nonatomic) NSString *rollbackText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
