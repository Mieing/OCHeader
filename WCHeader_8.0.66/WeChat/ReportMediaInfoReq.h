@class BaseRequest, ReportVideoInfo, NSString, ReportImageInfo, NSMutableArray;

@interface ReportMediaInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) ReportImageInfo *imageInfo;
@property (retain, nonatomic) ReportVideoInfo *videoInfo;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *emotionList;

+ (void)initialize;

@end
