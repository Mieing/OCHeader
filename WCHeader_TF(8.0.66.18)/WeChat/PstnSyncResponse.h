@class NSString, BaseResponse;

@interface PstnSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned int calledStatus;
@property (nonatomic) unsigned int calledStatusSyncKey;
@property (nonatomic) unsigned int dtmfPayloadType;
@property (nonatomic) unsigned int memberId;
@property (nonatomic) unsigned int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (nonatomic) unsigned int errLevel;
@property (retain, nonatomic) NSString *errTitle;

+ (void)initialize;

@end
