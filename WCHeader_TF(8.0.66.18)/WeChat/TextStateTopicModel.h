@class OrderedDictionary, NSString;

@interface TextStateTopicModel : NSObject <NSCopying>

@property (retain, nonatomic) OrderedDictionary *usernameToTextState;
@property (retain, nonatomic) NSString *topicId;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)iconWrap;
- (id)usernames;
- (void)addOrUpdateUsername:(id)a0 textState:(id)a1;
- (void)deleteUsername:(id)a0;
- (id)textStateForUsername:(id)a0;
- (id)anyTextState;
- (void)sortUsernames;
- (long long)compare:(id)a0;
- (void)inserSelfStatus;
- (id)topicPresentType;
- (void)onTopicAddOrUpdateWithTextState:(id)a0;
- (void)onTopicDeleteWithTextState:(id)a0;
- (id)clusterPresent;
- (BOOL)localJudgeClusterWithTopicId:(id)a0;
- (void).cxx_destruct;

@end
