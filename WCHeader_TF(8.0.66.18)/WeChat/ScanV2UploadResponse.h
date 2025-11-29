@class NSString, NSMutableArray, BaseResponse;

@interface ScanV2UploadResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *markResults;
@property (nonatomic) unsigned int networkLimitedTime;
@property (nonatomic) BOOL needPoi;
@property (retain, nonatomic) NSString *action;

+ (void)initialize;

@end
