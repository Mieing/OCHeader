@class NSMutableDictionary, NSString, NSMutableOrderedSet, NSMutableArray, TextStateTopicFactory;
@protocol TextStateTopicLogicDelegate;

@interface TextStateTopicLogic : NSObject

@property (retain, nonatomic) TextStateTopicFactory *factory;
@property (retain, nonatomic) NSMutableArray *topics;
@property (retain, nonatomic) NSMutableDictionary *idToTopic;
@property (retain, nonatomic) NSMutableDictionary *usernameToTopicId;
@property (retain, nonatomic) NSMutableOrderedSet *sortedUsernameSet;
@property (retain, nonatomic) NSString *presentType;
@property (weak, nonatomic) id<TextStateTopicLogicDelegate> delegate;

- (id)init;
- (void)initData;
- (unsigned long long)topicUsernameCount;
- (id)topicTextStateForUsername:(id)a0;
- (id)topicSortedUsernameList;
- (id)getTopics;
- (id)topicForId:(id)a0;
- (void)constructTopicsFromData:(id)a0 presentType:(id)a1;
- (void)updateTopicWithUsername:(id)a0 textState:(id)a1;
- (void)privateAddOrUpdateTopicWithUsername:(id)a0 textState:(id)a1;
- (void)privateDeleteTopicWithUsername:(id)a0;
- (void)sortTopics;
- (void).cxx_destruct;

@end
