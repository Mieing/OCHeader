@class FinderLiveQuestEntranceInfo, NSString, FinderLiveQuickReplyWordingInfo, NSMutableArray;

@interface MMFinderLiveStartLiveUIStateInfo : NSObject

@property (retain, nonatomic) NSString *bulletDescription;
@property (retain, nonatomic) NSString *bulletDdescriptionExtend;
@property (retain, nonatomic) NSString *bulletPlaceHolderString;
@property (retain, nonatomic) FinderLiveQuestEntranceInfo *questEntranceInfo;
@property (retain, nonatomic) NSMutableArray *questActivities;
@property (retain, nonatomic) FinderLiveQuickReplyWordingInfo *quickReplyWordingInfo;
@property (retain, nonatomic) NSMutableArray *lotteryArray;
@property (retain, nonatomic) NSMutableArray *lotteryAttendTypeList;

- (void).cxx_destruct;

@end
