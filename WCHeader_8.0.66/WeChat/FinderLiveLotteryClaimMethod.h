@class NSString, NSMutableArray, NSData;

@interface FinderLiveLotteryClaimMethod : WXPBGeneratedMessage

@property (nonatomic) unsigned int claimType;
@property (retain, nonatomic) NSString *remindWording;
@property (retain, nonatomic) NSString *buttonWording;
@property (nonatomic) unsigned int buttonStatus;
@property (retain, nonatomic) NSString *expiredWording;
@property (nonatomic) unsigned int isExpired;
@property (retain, nonatomic) NSMutableArray *claimInfo;
@property (retain, nonatomic) NSData *orderJumpInfo;
@property (nonatomic) unsigned int orderStatus;

+ (void)initialize;

@end
