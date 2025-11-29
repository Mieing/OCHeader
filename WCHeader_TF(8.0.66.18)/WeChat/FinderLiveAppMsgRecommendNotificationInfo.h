@class NSData, NSString, FinderJumpInfo;

@interface FinderLiveAppMsgRecommendNotificationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSData *businessBuf;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int showTimeMs;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (void)initialize;

@end
