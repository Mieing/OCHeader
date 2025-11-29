@class NSArray, _TtC27AWEKnowledgeRichContentImpl32FullPageFeedPOICardUserInfoModel, _TtC27AWEKnowledgeRichContentImpl38FullPageFeedPOICardRelatedPOIInfoModel;

@interface AWEKnowledgeRichContentImpl.FullPageFeedPOIDetailItemUGCModel : MTLModel <MTLJSONSerializing> {
    void /* function */ scoreTags;
    void /* function */ contentTags;
}

@property (nonatomic, retain) _TtC27AWEKnowledgeRichContentImpl32FullPageFeedPOICardUserInfoModel *userInfo;
@property (nonatomic, retain) _TtC27AWEKnowledgeRichContentImpl38FullPageFeedPOICardRelatedPOIInfoModel *relatedPOIInfo;
@property (nonatomic, copy) NSArray *scoreTags;
@property (nonatomic, copy) NSArray *contentTags;

+ (id)scoreTagsJSONTransformer;
+ (id)contentTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
