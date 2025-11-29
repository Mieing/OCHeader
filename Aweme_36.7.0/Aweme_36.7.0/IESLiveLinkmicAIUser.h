@class NSString, HTSLiveImage;

@interface IESLiveLinkmicAIUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (copy, nonatomic) NSString *belongUserId;
@property (copy, nonatomic) NSString *belongRoomId;
@property (copy, nonatomic) NSString *linkmicIdStr;

+ (id)descriptor;

@end
