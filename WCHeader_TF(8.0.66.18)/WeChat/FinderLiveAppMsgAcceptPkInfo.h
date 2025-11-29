@class NSString, NSData, LiveRoomImg;

@interface FinderLiveAppMsgAcceptPkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *applyMicSdkUserId;
@property (nonatomic) unsigned int applySdkLiveId;
@property (retain, nonatomic) NSString *applyLiveBgImgUrl;
@property (retain, nonatomic) NSString *acceptLiveBgImgUrl;
@property (retain, nonatomic) NSData *randomMicBuffer;
@property (retain, nonatomic) LiveRoomImg *applyVoiceLiveImg;
@property (retain, nonatomic) LiveRoomImg *acceptVoiceLiveImg;
@property (retain, nonatomic) NSString *acceptMicSdkUserId;
@property (nonatomic) unsigned int acceptSdkLiveId;
@property (retain, nonatomic) NSData *pkSign;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSData *newPkSign;

+ (void)initialize;

@end
