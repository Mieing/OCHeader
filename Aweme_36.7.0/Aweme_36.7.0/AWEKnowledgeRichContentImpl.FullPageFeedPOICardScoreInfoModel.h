@class NSString, _TtC27AWEKnowledgeRichContentImpl32FullPageFeedPOICardRateInfoModel;

@interface AWEKnowledgeRichContentImpl.FullPageFeedPOICardScoreInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ scoreText;
    void /* function */ scoreContent;
}

@property (nonatomic, copy) NSString *scoreText;
@property (nonatomic, copy) NSString *scoreContent;
@property (nonatomic, retain) _TtC27AWEKnowledgeRichContentImpl32FullPageFeedPOICardRateInfoModel *rateInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
