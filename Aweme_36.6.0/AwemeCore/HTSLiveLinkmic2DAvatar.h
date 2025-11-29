@class HTSLiveImage;

@interface HTSLiveLinkmic2DAvatar : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) BOOL enableAvatar;

+ (id)descriptor;

@end
