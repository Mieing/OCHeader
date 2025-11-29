@class NSString, FinderJumpInfo, FinderEncashPrepareInfo_RealNameAuthInfo, NSMutableArray;

@interface FinderEncashPrepareInfo : WXPBGeneratedMessage

@property (nonatomic) long long incomeBalance;
@property (retain, nonatomic) NSString *incomeBillUrl;
@property (nonatomic) long long pendingIncomeBalance;
@property (retain, nonatomic) FinderJumpInfo *encashInterceptJumpInfo;
@property (nonatomic) unsigned int encashScene;
@property (retain, nonatomic) FinderEncashPrepareInfo_RealNameAuthInfo *authInfo;
@property (retain, nonatomic) NSMutableArray *bizEncashInfoList;
@property (retain, nonatomic) NSString *newlyGeneratedIncomeTips;
@property (nonatomic) BOOL isEncashInterceptOnce;

+ (void)initialize;

@end
