@class NSArray;

@interface AWEKnowledgeRichContentImpl.FullPageFeedPOICardUserInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ userTags;
}

@property (nonatomic, copy) NSArray *userTags;

+ (id)userTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
