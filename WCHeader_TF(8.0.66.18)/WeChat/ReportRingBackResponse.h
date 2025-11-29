@class NSMutableArray, BaseResponse;

@interface ReportRingBackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infos;

+ (void)initialize;

@end
