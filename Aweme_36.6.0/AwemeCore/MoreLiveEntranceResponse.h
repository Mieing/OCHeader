@class MoreLiveEntranceData;

@interface MoreLiveEntranceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) MoreLiveEntranceData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
