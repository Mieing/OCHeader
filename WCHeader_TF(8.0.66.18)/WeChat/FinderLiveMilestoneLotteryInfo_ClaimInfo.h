@class NSString, NSMutableArray;

@interface FinderLiveMilestoneLotteryInfo_ClaimInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int claimType;
@property (retain, nonatomic) NSString *buttonWording;
@property (nonatomic) unsigned int buttonStatus;
@property (retain, nonatomic) NSString *expiredWording;
@property (nonatomic) unsigned int isExpired;
@property (retain, nonatomic) NSMutableArray *selfInfo;

+ (void)initialize;

@end
