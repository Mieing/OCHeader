@class NSString, JumpInfo, BaseResponse;

@interface JoinChatroomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *errmsg;
@property (nonatomic) BOOL needJumpCreateAccount;
@property (retain, nonatomic) JumpInfo *createAccountJumpInfo;
@property (retain, nonatomic) JumpInfo *chatroomFullJumpInfo;

+ (void)initialize;

@end
