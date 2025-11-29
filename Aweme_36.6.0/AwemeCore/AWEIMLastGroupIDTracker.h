@class NSString, NSMutableDictionary;

@interface AWEIMLastGroupIDTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *tempTrackDicM;
@property (nonatomic) double lastEnterMsgTabTime;
@property (copy, nonatomic) NSString *lastAuthorID;
@property (copy, nonatomic) NSString *lastGroupID;

+ (id)sharedIMTracker;

- (void)feedTableViewControllerWillPlayAweme:(id)a0;
- (void)handleEnterMessageTabEvent;
- (void)cleanLastGroupIDWithConversationID:(id)a0;
- (void)didEnterSingleChat:(id)a0;
- (void)setCustomKey:(id)a0 value:(id)a1 conversationId:(id)a2;
- (id)getLastGroupIDWithConversationID:(id)a0;
- (id)customKey:(id)a0 conversationId:(id)a1;
- (void)didTabBarChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
