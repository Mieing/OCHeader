@class NSString, ReviewInfo, FormatChatMessage;

@interface FormatChatHistoryMessage : IESLivePBBaseMessage

@property (retain, nonatomic) FormatChatMessage *chatMessage;
@property (nonatomic) BOOL hasChatMessage;
@property (copy, nonatomic) NSString *reqId;
@property (nonatomic) long long chatTime;
@property (retain, nonatomic) ReviewInfo *reviewInfo;
@property (nonatomic) BOOL hasReviewInfo;
@property (nonatomic) int commentOp;

+ (id)descriptor;

@end
