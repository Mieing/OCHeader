@class HTSLiveImage;

@interface HTSLiveButtonImage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *staticImage;
@property (nonatomic) BOOL hasStaticImage;
@property (retain, nonatomic) HTSLiveImage *hoverImage;
@property (nonatomic) BOOL hasHoverImage;
@property (retain, nonatomic) HTSLiveImage *checkedImage;
@property (nonatomic) BOOL hasCheckedImage;

+ (id)descriptor;

@end
