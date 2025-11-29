@class BizAcctActivity_ActivityInfo_BasicInfo_ShopInfo, BizAcctActivity_ActivityInfo_BasicInfo_MPFileInfo, NSString;

@interface BizAcctActivity_ActivityInfo_BasicInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long activityStartTime;
@property (nonatomic) unsigned long long activityEndTime;
@property (retain, nonatomic) BizAcctActivity_ActivityInfo_BasicInfo_ShopInfo *shopInfo;
@property (retain, nonatomic) BizAcctActivity_ActivityInfo_BasicInfo_MPFileInfo *mpFileInfo;
@property (retain, nonatomic) NSString *welcomeWording;
@property (retain, nonatomic) NSString *msgcover;
@property (retain, nonatomic) NSString *boxoutercover;

+ (void)initialize;

@end
