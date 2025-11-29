@class HTSLiveImage;

@interface HTSLiveDoodleTemplate : IESLivePBBaseMessage

@property (nonatomic) long long templateId;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;

+ (id)descriptor;

@end
