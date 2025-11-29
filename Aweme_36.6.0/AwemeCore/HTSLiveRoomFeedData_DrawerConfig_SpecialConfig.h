@class NSString, HTSLiveRoomFeedData_DrawerConfig_EntranceTitle, HTSLiveRoomFeedData_DrawerConfig_FreqInfo;

@interface HTSLiveRoomFeedData_DrawerConfig_SpecialConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoomFeedData_DrawerConfig_EntranceTitle *entraceTitle;
@property (nonatomic) BOOL hasEntraceTitle;
@property (nonatomic) int moreLiveTab;
@property (nonatomic) int insertRoomReason;
@property (retain, nonatomic) HTSLiveRoomFeedData_DrawerConfig_FreqInfo *freqInfo;
@property (nonatomic) BOOL hasFreqInfo;
@property (copy, nonatomic) NSString *currentTalent;

+ (id)descriptor;

@end
