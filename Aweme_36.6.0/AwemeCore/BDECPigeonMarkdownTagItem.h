@class NSString, BDECPigeonMarkdownTagInfo;

@interface BDECPigeonMarkdownTagItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tagType;
@property (retain, nonatomic) BDECPigeonMarkdownTagInfo *tagInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
