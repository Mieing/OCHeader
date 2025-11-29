@class FinderWindowProductInfo, NSString, FinderLiveNumericAnimationRuleInfo;

@interface FinderLiveAppMsgProductHotSaleNotificationInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (retain, nonatomic) NSString *notifycationWording;
@property (retain, nonatomic) NSString *numDelimiterStr;
@property (retain, nonatomic) NSString *entryWording;
@property (retain, nonatomic) FinderLiveNumericAnimationRuleInfo *numAnimationInfo;
@property (nonatomic) unsigned int notificationType;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) NSString *itemSessionBuff;

+ (void)initialize;

@end
