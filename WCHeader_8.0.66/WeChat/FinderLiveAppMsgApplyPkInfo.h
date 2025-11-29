@class NSString, LiveRoomImg, NSData;

@interface FinderLiveAppMsgApplyPkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *liveBgImgUrl;
@property (retain, nonatomic) LiveRoomImg *voiceLiveImg;
@property (retain, nonatomic) NSData *randomMicBuffer;
@property (retain, nonatomic) NSString *applyMicSdkUserId;
@property (nonatomic) unsigned int applySdkLiveId;

+ (void)initialize;

@end
