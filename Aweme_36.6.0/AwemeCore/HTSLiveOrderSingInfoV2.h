@class HTSLiveOrderSingMVInfo, NSString, HTSLiveCurrentOrderSingItemV2, GPBInt64Array, NSMutableArray, IESLiveRoomSongInfo;

@interface HTSLiveOrderSingInfoV2 : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userMicrophoneListArray;
@property (readonly, nonatomic) unsigned long long userMicrophoneListArray_Count;
@property (nonatomic) long long giftId;
@property (nonatomic) BOOL autoEnlarge;
@property (copy, nonatomic) NSString *currentSingItem;
@property (retain, nonatomic) GPBInt64Array *giftIdsArray;
@property (readonly, nonatomic) unsigned long long giftIdsArray_Count;
@property (retain, nonatomic) HTSLiveOrderSingMVInfo *mvInfo;
@property (nonatomic) BOOL hasMvInfo;
@property (retain, nonatomic) GPBInt64Array *auditionGiftIdsArray;
@property (readonly, nonatomic) unsigned long long auditionGiftIdsArray_Count;
@property (nonatomic) BOOL showGiftInfo;
@property (retain, nonatomic) HTSLiveCurrentOrderSingItemV2 *currentOrderSingItem;
@property (nonatomic) BOOL hasCurrentOrderSingItem;
@property (nonatomic) BOOL aiLyricsSwitchOn;
@property (nonatomic) int mode;
@property (nonatomic) BOOL multiAvatarMode;
@property (nonatomic) int stageEffects;
@property (retain, nonatomic) IESLiveRoomSongInfo *roomSongInfo;
@property (nonatomic) BOOL hasRoomSongInfo;

+ (id)descriptor;

@end
