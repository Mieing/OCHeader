@class NSMutableDictionary;

@interface TextStateIconDescriptionTopicModel : TextStateTopicModel

@property (nonatomic, getter=isDataConstructed) BOOL dataConstructed;
@property (retain, nonatomic) NSMutableDictionary *iconIdToTextStateList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)topicPresentType;
- (void)onTopicAddOrUpdateWithTextState:(id)a0;
- (void)onTopicDeleteWithTextState:(id)a0;
- (id)clusterPresent;
- (id)mostFrequentAndRecentClusterPresent;
- (void)constructDataIfNeeded;
- (void)privateAddOrUpdateTextState:(id)a0;
- (void)privateDeleteTextState:(id)a0;
- (void).cxx_destruct;

@end
