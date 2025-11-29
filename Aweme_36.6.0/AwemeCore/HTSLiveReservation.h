@class NSString, GPBInt64Array;

@interface HTSLiveReservation : IESLivePBBaseMessage

@property (nonatomic) long long appointmentId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long roomId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) GPBInt64Array *btnRectArray;
@property (readonly, nonatomic) unsigned long long btnRectArray_Count;
@property (copy, nonatomic) NSString *btnColor;
@property (nonatomic) BOOL isReserved;

+ (id)descriptor;

@end
