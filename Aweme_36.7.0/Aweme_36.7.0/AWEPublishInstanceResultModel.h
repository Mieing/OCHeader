@class NSString;

@interface AWEPublishInstanceResultModel : NSObject

@property (nonatomic) unsigned long long publishedMediaType;
@property (readonly, copy, nonatomic) NSString *clipId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *imageId;
@property (copy, nonatomic) NSString *livePhotoFirstFrameId;

- (void).cxx_destruct;
- (BOOL)isValid;
- (void)copyFrom:(id)a0;

@end
