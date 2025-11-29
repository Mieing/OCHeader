@class HTSLiveUser, NSString, HTSLiveCommon, HTSLiveText, HTSLivePublicAreaCommon;

@interface HTSLiveAudioChatMessage : IESLivePBBaseMessage <IESLiveAudioPlaybackItem>

@property (copy, nonatomic) NSString *audioId;
@property (copy, nonatomic) NSString *localPath;
@property (copy, nonatomic) NSString *audioURL;
@property (nonatomic) BOOL hasPlay;
@property (nonatomic) BOOL isSentByCurrentUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *audioURL;
@property (nonatomic) long long audioDuration;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (retain, nonatomic) HTSLiveText *rtfContent;
@property (nonatomic) BOOL hasRtfContent;

+ (id)descriptor;


@end
