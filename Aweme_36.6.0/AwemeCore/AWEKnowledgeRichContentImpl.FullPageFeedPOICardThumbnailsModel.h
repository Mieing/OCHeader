@class NSArray;

@interface AWEKnowledgeRichContentImpl.FullPageFeedPOICardThumbnailsModel : MTLModel <MTLJSONSerializing> {
    void /* function */ urlList;
}

@property (nonatomic, copy) NSArray *urlList;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
