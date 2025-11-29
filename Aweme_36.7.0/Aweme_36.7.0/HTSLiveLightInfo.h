@class HTSLiveImage;

@interface HTSLiveLightInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isOn;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;

+ (id)descriptor;

@end
