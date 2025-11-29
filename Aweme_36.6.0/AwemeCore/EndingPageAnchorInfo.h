@class AppointmentInfo, NSString, HTSLiveRoom;

@interface EndingPageAnchorInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) AppointmentInfo *appointment;
@property (nonatomic) BOOL hasAppointment;
@property (nonatomic) long long totalScore;
@property (nonatomic) long long rankIndex;
@property (nonatomic) long long totalUserCount;
@property (copy, nonatomic) NSString *countStr;

+ (id)descriptor;

@end
