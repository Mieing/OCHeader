@class BaseRequest, NSMutableArray;

@interface OpVoiceReminderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int opCode;
@property (nonatomic) unsigned int remindInfoNum;
@property (retain, nonatomic) NSMutableArray *remindInfoList;

+ (void)initialize;

@end
