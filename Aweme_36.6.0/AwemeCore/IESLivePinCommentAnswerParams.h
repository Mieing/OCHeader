@class NSString;

@interface IESLivePinCommentAnswerParams : NSObject

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userNums;
@property (copy, nonatomic) NSString *describe;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long answerMsgId;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
