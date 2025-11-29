@class OftenWatchDataResponse;

@interface OftenWatchResponse : IESLivePBBaseMessage

@property (retain, nonatomic) OftenWatchDataResponse *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
