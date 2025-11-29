@class HTSLiveImage;

@interface CreateInfoResponse_AICoverInfo : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (nonatomic) int source;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;

+ (id)descriptor;

@end
