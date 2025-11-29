@class NSString;

@interface EndingPageReservation : IESLivePBBaseMessage

@property (nonatomic) long long appointmentId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long roomId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL isReserved;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
