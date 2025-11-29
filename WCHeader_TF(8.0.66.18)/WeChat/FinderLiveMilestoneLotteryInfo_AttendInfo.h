@class NSString, NSMutableArray, FinderLiveMilestoneLotteryInfo_AttendInfo_AccountInfo;

@interface FinderLiveMilestoneLotteryInfo_AttendInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *commentWording;
@property (retain, nonatomic) NSString *votingId;
@property (retain, nonatomic) NSMutableArray *choiceList;
@property (retain, nonatomic) NSString *votingWording;
@property (retain, nonatomic) NSString *votingTips;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_AttendInfo_AccountInfo *account;

+ (void)initialize;

@end
