@class NSString, NSMutableArray, BaseResponse;

@interface VoIPMtAddMemberResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSMutableArray *calleeIdInfo;

+ (void)initialize;

@end
