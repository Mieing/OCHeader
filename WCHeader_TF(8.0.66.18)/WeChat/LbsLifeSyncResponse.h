@class BaseResponse, EntranceReportSwitch, NSData, NSMutableArray, SKBuiltinBuffer_t;

@interface LbsLifeSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) NSMutableArray *cmdList;
@property (retain, nonatomic) EntranceReportSwitch *entranceExposeSwitch;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
