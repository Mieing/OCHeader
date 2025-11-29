@class NSString;

@interface HTSLiveColumnAppointment : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) long long appointmentId;
@property (nonatomic) long long itemId;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long appointCount;
@property (nonatomic) int auditFailedReason;
@property (nonatomic) long long liveRoomId;
@property (copy, nonatomic) NSString *liveRoomIdStr;
@property (nonatomic) BOOL subscribe;
@property (copy, nonatomic) NSString *appointmentIdStr;
@property (copy, nonatomic) NSString *itemIdStr;
@property (copy, nonatomic) NSString *ticketIdStr;
@property (nonatomic) long long ticketId;
@property (nonatomic) BOOL hasPaid;
@property (nonatomic) int itemType;
@property (copy, nonatomic) NSString *ticketPanelSixJumpURL;
@property (copy, nonatomic) NSString *ticketPanelJumpURL;

+ (id)descriptor;

@end
