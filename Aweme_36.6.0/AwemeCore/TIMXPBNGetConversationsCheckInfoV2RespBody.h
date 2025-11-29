@class NSMutableArray;

@interface TIMXPBNGetConversationsCheckInfoV2RespBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationCheckinfoListArray;
@property (readonly, nonatomic) unsigned long long conversationCheckinfoListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) long long nextVersion;
@property (nonatomic) BOOL hasNextVersion;
@property (retain, nonatomic) NSMutableArray *strangerConversationCheckinfoListArray;
@property (readonly, nonatomic) unsigned long long strangerConversationCheckinfoListArray_Count;
@property (nonatomic) BOOL strangerHasMore;
@property (nonatomic) BOOL hasStrangerHasMore;
@property (nonatomic) long long strangerNextVersion;
@property (nonatomic) BOOL hasStrangerNextVersion;

+ (id)descriptor;

@end
