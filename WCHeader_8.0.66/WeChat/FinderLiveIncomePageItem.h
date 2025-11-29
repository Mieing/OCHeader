@class NSString, FinderJumpInfo, FinderEncashPrepareInfo;

@interface FinderLiveIncomePageItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int pageType;
@property (nonatomic) unsigned int wecoinBusinessId;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionUrl;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *actionAppId;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderEncashPrepareInfo *encashPrepareInfo;

+ (void)initialize;

@end
