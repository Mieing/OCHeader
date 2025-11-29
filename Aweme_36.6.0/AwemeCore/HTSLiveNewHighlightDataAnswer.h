@class NSString, HTSLiveNewPinCommon;

@interface HTSLiveNewHighlightDataAnswer : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *answerId;
@property (copy, nonatomic) NSString *question;
@property (copy, nonatomic) NSString *answer;
@property (nonatomic) long long audienceNumber;
@property (copy, nonatomic) NSString *audienceNumberStr;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *commenterId;
@property (nonatomic) long long questionMsgId;
@property (nonatomic) long long answerMsgId;
@property (retain, nonatomic) HTSLiveNewPinCommon *pinCommon;
@property (nonatomic) BOOL hasPinCommon;

+ (id)descriptor;

@end
