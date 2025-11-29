@class NSString, NSMutableArray, HintInfo;

@interface AnnouncementAnchorGetResponseV2_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL available;
@property (retain, nonatomic) NSMutableArray *allGroupListArray;
@property (readonly, nonatomic) unsigned long long allGroupListArray_Count;
@property (retain, nonatomic) NSMutableArray *appointmentListArray;
@property (readonly, nonatomic) unsigned long long appointmentListArray_Count;
@property (nonatomic) int banned;
@property (nonatomic) long long banFinishTime;
@property (nonatomic) int banType;
@property (copy, nonatomic) NSString *banToast;
@property (copy, nonatomic) NSString *questionURL;
@property (copy, nonatomic) NSString *unperformanceDetailURL;
@property (nonatomic) int bannedStatus;
@property (nonatomic) int banTypeV2;
@property (retain, nonatomic) HintInfo *createPageTopHint;
@property (nonatomic) BOOL hasCreatePageTopHint;
@property (nonatomic) BOOL liveRoomAppointmentSticker;
@property (nonatomic) BOOL showRedPacket;
@property (retain, nonatomic) NSMutableArray *redPacketsArray;
@property (readonly, nonatomic) unsigned long long redPacketsArray_Count;

+ (id)descriptor;

@end
