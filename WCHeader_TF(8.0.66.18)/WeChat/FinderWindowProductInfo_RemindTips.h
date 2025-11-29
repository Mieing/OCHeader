@class NSString, EcsJumpInfo, NSData;

@interface FinderWindowProductInfo_RemindTips : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *remindWording;
@property (retain, nonatomic) NSString *remindIconUrl;
@property (retain, nonatomic) EcsJumpInfo *remindJumpInfo;
@property (retain, nonatomic) NSData *productRemindTipsBuffer;

+ (void)initialize;

@end
