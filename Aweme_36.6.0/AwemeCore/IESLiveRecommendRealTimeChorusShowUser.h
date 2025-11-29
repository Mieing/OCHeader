@class NSString, HTSLiveImage;

@interface IESLiveRecommendRealTimeChorusShowUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;

+ (id)descriptor;

@end
