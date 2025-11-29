@class HTSLiveImage;

@interface HTSLiveUploadImageResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;

+ (id)descriptor;

@end
