@class NSDictionary, AWEIMMessageConversation;
@protocol AWEIMConversationFeatureConfigProtocol;

@interface AWEIMGroupEntryLimitsViewNonLimitContext : NSObject

@property (retain, nonatomic) id<AWEIMConversationFeatureConfigProtocol> featureConfig;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL allowAdvUserJoinStatus;
@property (nonatomic) BOOL allowAskPraiseUserJoinStatus;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
