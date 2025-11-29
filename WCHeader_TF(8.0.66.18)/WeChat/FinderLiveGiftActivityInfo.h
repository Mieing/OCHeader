@class FinderLiveGiftActivityInfo_FinderLiveGiftActivityParticipability, NSString, NSData, FinderLiveGiftMethod;

@interface FinderLiveGiftActivityInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) FinderLiveGiftMethod *method;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int attendEndTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int extFlag;
@property (retain, nonatomic) NSString *giftId;
@property (nonatomic) unsigned int participateCount;
@property (retain, nonatomic) NSData *lotteryPageJumpInfo;
@property (retain, nonatomic) FinderLiveGiftActivityInfo_FinderLiveGiftActivityParticipability *participability;

+ (void)initialize;

@end
