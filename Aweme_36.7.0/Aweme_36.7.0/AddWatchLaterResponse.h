@class AddWatchLaterData;

@interface AddWatchLaterResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AddWatchLaterData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
