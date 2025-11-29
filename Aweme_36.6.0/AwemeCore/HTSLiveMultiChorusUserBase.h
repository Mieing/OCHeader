@class NSString, HTSLiveImage;

@interface HTSLiveMultiChorusUserBase : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) int secret;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) int mysteryMan;

+ (id)descriptor;

@end
