@class NSString, GPBInt32Array, HTSLiveUser;

@interface MoreReservableData_MoreReservableItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *appointmentId;
@property (nonatomic) long long dueStartTime;
@property (nonatomic) long long cycle;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekdaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (nonatomic) BOOL hideStartTime;
@property (nonatomic) long long dueEndTime;
@property (nonatomic) BOOL isSubscribed;

+ (id)descriptor;

@end
