@class AWESearchVideoNoteV2Model, NSString, NSArray, AWESearchVideoPanelPrefixModel;

@interface AWESearchAIParseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *generalAbstract;
@property (copy, nonatomic) NSString *captionGeneralAbstract;
@property (retain, nonatomic) AWESearchVideoNoteV2Model *videoNoteModelV2;
@property (retain, nonatomic) AWESearchVideoPanelPrefixModel *videoPanelPrefix;
@property (nonatomic) long long docRank;
@property (copy, nonatomic) NSArray *chapterList;

+ (id)chapterListJSONTransformer;
+ (id)videoNoteModelV2JSONTransformer;
+ (id)videoPanelPrefixJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
