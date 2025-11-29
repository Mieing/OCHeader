@class NSString, FinderLiveContact;

@interface FinderLiveAppMsgAudienceMicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveContact *micContact;
@property (nonatomic) int micType;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (retain, nonatomic) NSString *liveMicId;
@property (nonatomic) unsigned long long micSeq;
@property (nonatomic) unsigned int seatId;

+ (void)initialize;

@end
