@class HTSLiveUser, NSMutableArray, IESLiveResidentGuestBanner_UIConfig;

@interface IESLiveResidentGuestBanner : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveResidentGuestBanner_UIConfig *uiConfig;
@property (nonatomic) BOOL hasUiConfig;
@property (retain, nonatomic) NSMutableArray *membersArray;
@property (readonly, nonatomic) unsigned long long membersArray_Count;
@property (retain, nonatomic) HTSLiveUser *residentLinkmicRoomAnchor;
@property (nonatomic) BOOL hasResidentLinkmicRoomAnchor;

+ (id)descriptor;

@end
