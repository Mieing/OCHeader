@class BaseRequest, NSString, NSMutableArray;

@interface ReportMsgReadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (retain, nonatomic) NSMutableArray *readSeqList;

+ (void)initialize;

@end
