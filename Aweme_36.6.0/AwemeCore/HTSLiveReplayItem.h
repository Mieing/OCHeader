@class NSString;

@interface HTSLiveReplayItem : IESLivePBBaseMessage

@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long episodeIdStr;
@property (copy, nonatomic) NSString *itemIdStr;
@property (copy, nonatomic) NSString *roomIdStr;
@property (nonatomic) long long watchCount;
@property (nonatomic) long long columnAppointmentId;
@property (nonatomic) long long replayMaterialId;
@property (copy, nonatomic) NSString *formatEpisodeIdStr;
@property (nonatomic) BOOL hasPaid;
@property (copy, nonatomic) NSString *ticketIdStr;
@property (nonatomic) int status;
@property (nonatomic) BOOL paidLiveRoom;
@property (copy, nonatomic) NSString *replayId;
@property (copy, nonatomic) NSString *ticketPanelSixJumpURL;
@property (copy, nonatomic) NSString *ticketPanelJumpURL;

+ (id)descriptor;

@end
