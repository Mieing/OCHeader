@class NSNumber;

@interface IESIMThirdPartyDataManagerConfig : NSObject

@property (nonatomic) int bizId;
@property (nonatomic) int inboxType;
@property (nonatomic) unsigned long long topN;
@property (copy, nonatomic) NSNumber *shouldUseUpdatedAtWhenFindHintConversation;
@property (copy, nonatomic) NSNumber *shouldSetSourceWhenProcessChatDict;

- (void).cxx_destruct;

@end
