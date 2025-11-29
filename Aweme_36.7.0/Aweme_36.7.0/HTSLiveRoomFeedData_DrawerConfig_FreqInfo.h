@class NSString;

@interface HTSLiveRoomFeedData_DrawerConfig_FreqInfo : IESLivePBBaseMessage

@property (nonatomic) int showDuration;
@property (copy, nonatomic) NSString *freqKey;
@property (nonatomic) int freqDuration;

+ (id)descriptor;

@end
