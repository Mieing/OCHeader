@class NSString, EcsJumpInfo;

@interface PresentOrderInfo_EcsGiftInfo_EcsCategoryData : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *busiData;
@property (retain, nonatomic) EcsJumpInfo *changeCategory;
@property (nonatomic) unsigned int canNotChangeAcct;
@property (retain, nonatomic) NSString *canNotChangeAcctTips;

+ (void)initialize;

@end
