@class NSString, NSData;

@interface PrizeRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long recordTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *statusWording;
@property (retain, nonatomic) NSString *questId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSData *giftJumpInfo;
@property (nonatomic) unsigned long long liveId;

+ (void)initialize;

@end
