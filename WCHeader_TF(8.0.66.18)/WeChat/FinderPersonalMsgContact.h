@class FinderContact, NSString, FinderLiveContact;

@interface FinderPersonalMsgContact : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (retain, nonatomic) NSString *liveAlias;
@property (nonatomic) unsigned long long rewardTotalAmountInWecoin;
@property (retain, nonatomic) FinderLiveContact *liveContact;

+ (void)initialize;

@end
