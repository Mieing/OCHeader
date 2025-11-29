@class MoneyOffTagInfo, NSString;

@interface FinderLiveGetMoneyOffTagResponse : WXPBGeneratedMessage

@property (retain, nonatomic) MoneyOffTagInfo *moneyOffTagInfo;
@property (nonatomic) BOOL autoOpenPage;
@property (retain, nonatomic) NSString *autoOpenPageUniqueId;

+ (void)initialize;

@end
