@class NSString, GPBInt64Array, IESLiveRoomSongInfo;

@interface HTSLiveLinkmicOrderSingCreateContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *openOrderSingToast;
@property (nonatomic) long long giftId;
@property (nonatomic) BOOL autoEnlarge;
@property (retain, nonatomic) GPBInt64Array *giftIdsArray;
@property (readonly, nonatomic) unsigned long long giftIdsArray_Count;
@property (retain, nonatomic) GPBInt64Array *auditionGiftIdsArray;
@property (readonly, nonatomic) unsigned long long auditionGiftIdsArray_Count;
@property (nonatomic) BOOL showGiftInfo;
@property (nonatomic) BOOL aiLyrics;
@property (nonatomic) int mode;
@property (nonatomic) BOOL autioPlayMv;
@property (nonatomic) BOOL multiAvatarMode;
@property (retain, nonatomic) IESLiveRoomSongInfo *roomSongInfo;
@property (nonatomic) BOOL hasRoomSongInfo;
@property (nonatomic) int stageEffects;

+ (id)descriptor;

@end
