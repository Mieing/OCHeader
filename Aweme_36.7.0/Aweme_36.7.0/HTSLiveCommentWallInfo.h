@class NSString;

@interface HTSLiveCommentWallInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long id_p;
@property (nonatomic) long long commentMsgId;
@property (copy, nonatomic) NSString *commenterId;
@property (copy, nonatomic) NSString *commenterNickname;
@property (nonatomic) long long eventTime;
@property (nonatomic) long long msgTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int countdownStyle;
@property (copy, nonatomic) NSString *operatorId;
@property (copy, nonatomic) NSString *operatorNickname;

+ (id)descriptor;

@end
