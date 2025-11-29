@class NSString, _TtC27AWEKnowledgeRichContentImpl33FullPageFeedPOICardScoreInfoModel, _TtC27AWEKnowledgeRichContentImpl34FullPageFeedPOICardThumbnailsModel;

@interface AWEKnowledgeRichContentImpl.FullPageFeedPOICardRelatedPOIInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ POIName;
    void /* function */ url;
    void /* function */ optionName;
    void /* function */ location;
    void /* function */ distance;
}

@property (nonatomic, copy) NSString *POIName;
@property (nonatomic, retain) _TtC27AWEKnowledgeRichContentImpl33FullPageFeedPOICardScoreInfoModel *scoreInfo;
@property (nonatomic, retain) _TtC27AWEKnowledgeRichContentImpl34FullPageFeedPOICardThumbnailsModel *iconList;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *optionName;
@property (nonatomic, copy) NSString *location;
@property (nonatomic) long long cost;
@property (nonatomic, copy) NSString *distance;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
