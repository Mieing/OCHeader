@class MMLiveCatalogedMerchandiseLotteryQuest, NSString, NSURL, FinderJumpInfo, MMFinderLiveOpenProductPageParam;

@interface MMLiveCatalogedMerchandiseLotteryInfo : NSObject

@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *orderId;
@property (nonatomic) BOOL ineligible;
@property (retain, nonatomic) NSString *ineligibilityDescription;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long receivedUnixEpochTime;
@property (nonatomic) unsigned long long currentStatusEndingUnixEpochTime;
@property (nonatomic) unsigned long long endingUnixEpochTime;
@property (retain, nonatomic) NSURL *merchandiseThumbnailUri;
@property (retain, nonatomic) NSString *merchandiseName;
@property (retain, nonatomic) MMFinderLiveOpenProductPageParam *merchandiseDetailsOpenParameters;
@property (nonatomic) unsigned long long merchandiseItemsCount;
@property (nonatomic) unsigned long long participantsCount;
@property (nonatomic) BOOL participated;
@property (nonatomic) BOOL exhausted;
@property (retain, nonatomic) FinderJumpInfo *drawingPageJumpInfo;
@property (retain, nonatomic) MMLiveCatalogedMerchandiseLotteryQuest *quest;
@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) BOOL active;

+ (id)lotteryInfoWithActivityInfo:(id)a0 previousLotteryInfoForTimeAdjustment:(id)a1 liveTaskId:(id)a2;
+ (unsigned long long)adjustedCurrentStatusEndingUnixEpochTimeWithActivityInfo:(id)a0 previousLotteryInfo:(id)a1 currentServerTime:(unsigned long long)a2;

- (BOOL)validAtUnixEpochTime:(unsigned long long)a0;
- (void).cxx_destruct;

@end
