@class NSData, BaseResponse;

@interface VoipCSSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned int notifySeq;
@property (nonatomic) unsigned int calleeMemberId;
@property (nonatomic) unsigned int calleeStatus;
@property (nonatomic) unsigned int calleeSubStatus;
@property (retain, nonatomic) NSData *calleeCap;

+ (void)initialize;

@end
