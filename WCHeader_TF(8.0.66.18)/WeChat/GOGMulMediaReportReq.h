@class BaseRequest, GOGMulMediaInfo, NSMutableArray;

@interface GOGMulMediaReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long fromUin;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int scene;
@property (retain, nonatomic) GOGMulMediaInfo *media;
@property (retain, nonatomic) NSMutableArray *extNew;

+ (void)initialize;

@end
