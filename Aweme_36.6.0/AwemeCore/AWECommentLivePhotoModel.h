@class NSArray, NSString;

@interface AWECommentLivePhotoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *videoUrl;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *liveVideoContent;
@property (nonatomic) unsigned long long dataSize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
