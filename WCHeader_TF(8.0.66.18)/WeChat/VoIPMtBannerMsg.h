@class NSString, NSMutableArray;

@interface VoIPMtBannerMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxGroupid;
@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSString *sdkGroupid;
@property (retain, nonatomic) NSMutableArray *userStatusList;
@property (nonatomic) unsigned long long msgSeq;
@property (nonatomic) unsigned int talkingStatus;
@property (retain, nonatomic) NSString *createUserName;

+ (void)initialize;

@end
