@class CancelWatchLaterData;

@interface CancelWatchLaterResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CancelWatchLaterData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
