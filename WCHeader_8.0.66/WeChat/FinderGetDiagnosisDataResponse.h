@class NSMutableArray, BaseResponse;

@interface FinderGetDiagnosisDataResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *diagnosisItems;

+ (void)initialize;

@end
