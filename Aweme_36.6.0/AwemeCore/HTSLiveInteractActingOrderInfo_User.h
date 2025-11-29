@class NSString, HTSLiveImage;

@interface HTSLiveInteractActingOrderInfo_User : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;

+ (id)descriptor;

@end
