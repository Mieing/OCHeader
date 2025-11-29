@class NSString;

@interface ConfJoinInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long imroomid;
@property (retain, nonatomic) NSString *groupid;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) BOOL muteAudio;
@property (nonatomic) BOOL muteVideo;
@property (nonatomic) unsigned int netType;
@property (retain, nonatomic) NSString *businessInfo;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *ownerGroupid;
@property (nonatomic) unsigned int fixedVideoLength;
@property (nonatomic) unsigned int maxDecodeFps;
@property (nonatomic) unsigned int videoRatio;
@property (nonatomic) unsigned int videoConfig;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *subAppid;
@property (nonatomic) unsigned long long joinId;

+ (void)initialize;

@end
