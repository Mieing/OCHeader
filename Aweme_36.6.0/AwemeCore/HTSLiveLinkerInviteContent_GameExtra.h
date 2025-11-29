@class NSString, HTSLiveImage;

@interface HTSLiveLinkerInviteContent_GameExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *gameNickName;
@property (nonatomic) int isEnemy;
@property (retain, nonatomic) HTSLiveImage *gameAvatar;
@property (nonatomic) BOOL hasGameAvatar;
@property (nonatomic) int matchSource;

+ (id)descriptor;

@end
