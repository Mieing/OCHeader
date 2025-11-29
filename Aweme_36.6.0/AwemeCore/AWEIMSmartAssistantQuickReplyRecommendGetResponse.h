@class NSString, NSMutableArray;

@interface AWEIMSmartAssistantQuickReplyRecommendGetResponse : GPBMessage

@property (nonatomic) int statusCode;
@property (nonatomic) BOOL hasStatusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL hasStatusMsg;
@property (retain, nonatomic) NSMutableArray *replyListArray;
@property (readonly, nonatomic) unsigned long long replyListArray_Count;
@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;

+ (id)descriptor;

@end
