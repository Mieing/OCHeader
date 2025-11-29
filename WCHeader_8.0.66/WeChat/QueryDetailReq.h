@class BaseRequest, NSString;

@interface QueryDetailReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *transferBillId;
@property (nonatomic) BOOL enterFromHistoryRecord;
@property (nonatomic) unsigned int historyRecordState;

+ (void)initialize;

@end
