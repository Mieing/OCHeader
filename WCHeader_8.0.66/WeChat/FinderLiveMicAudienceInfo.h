@class NSString, FinderLiveContact;

@interface FinderLiveMicAudienceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveContact *micContact;
@property (nonatomic) int micType;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (retain, nonatomic) NSString *liveMicId;
@property (nonatomic) unsigned long long micSeq;
@property (retain, nonatomic) NSString *boardKey;
@property (nonatomic) unsigned int boardType;
@property (nonatomic) unsigned int seatId;

+ (void)initialize;

@end
