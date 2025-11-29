@class BaseRequest, NSMutableArray;

@interface TalkStatReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int dataNum;
@property (retain, nonatomic) NSMutableArray *reportData;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
