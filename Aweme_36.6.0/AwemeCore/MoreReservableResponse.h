@class MoreReservableData;

@interface MoreReservableResponse : IESLivePBBaseMessage

@property (retain, nonatomic) MoreReservableData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
