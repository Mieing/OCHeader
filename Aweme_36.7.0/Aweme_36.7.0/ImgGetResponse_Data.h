@class HTSLiveImage;

@interface ImgGetResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;

+ (id)descriptor;

@end
