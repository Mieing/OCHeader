@class NSString, NSMutableArray;

@interface PushInsertNoticeResponse : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSMutableArray *insertNoticesArray;
@property (readonly, nonatomic) unsigned long long insertNoticesArray_Count;

+ (id)descriptor;

@end
