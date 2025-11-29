@class NSArray, NSString;

@interface IESLivePlaybackCommentTopicResponse : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *topicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
