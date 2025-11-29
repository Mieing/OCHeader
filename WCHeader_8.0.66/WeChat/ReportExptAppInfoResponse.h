@class NSMutableArray, BaseResponse;

@interface ReportExptAppInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int intervalSecond;
@property (nonatomic) unsigned int pullSecond;
@property (retain, nonatomic) NSMutableArray *replaceExptList;
@property (retain, nonatomic) NSMutableArray *deleteExptList;

+ (void)initialize;

@end
