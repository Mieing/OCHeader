@class Broadcast, NSString, AtInfo, SlotList, NotificationBar, BaseResponse, ChatroomData, RealtimeControlInfo, Popup;

@interface GetChatroomRealtimeInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NotificationBar *notificationBar;
@property (retain, nonatomic) SlotList *slotList;
@property (retain, nonatomic) Broadcast *broadcast;
@property (retain, nonatomic) NSString *nextVersion;
@property (retain, nonatomic) AtInfo *atInfo;
@property (retain, nonatomic) ChatroomData *currentChatroomData;
@property (retain, nonatomic) RealtimeControlInfo *controlInfo;
@property (retain, nonatomic) Popup *popup;

+ (void)initialize;

@end
