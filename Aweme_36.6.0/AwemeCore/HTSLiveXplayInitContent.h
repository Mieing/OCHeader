@class NSString, HTSLiveXplayHamletAvatarInitContent;

@interface HTSLiveXplayInitContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *initParam;
@property (nonatomic) int initType;
@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *videoSimulcast;
@property (nonatomic) long long videoSimulcastIndex;
@property (retain, nonatomic) HTSLiveXplayHamletAvatarInitContent *hamletAvatarInit;
@property (nonatomic) BOOL hasHamletAvatarInit;

+ (id)descriptor;

@end
