@class HTSLiveAvatarCommon, NSString;

@interface HTSLiveAvatarChatResumeRequest : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *rspId;
@property (nonatomic) int latestSequence;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
