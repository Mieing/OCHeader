@class NSString, FinderJumpInfo;

@interface LiveRewardIncomeBizInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int bizType;
@property (retain, nonatomic) NSString *bizAcctId;
@property (nonatomic) long long incomeBalance;
@property (retain, nonatomic) NSString *shareContent;
@property (retain, nonatomic) FinderJumpInfo *encashInterceptJumpInfo;

+ (void)initialize;

@end
