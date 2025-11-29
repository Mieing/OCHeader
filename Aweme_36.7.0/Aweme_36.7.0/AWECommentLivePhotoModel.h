@class NSArray;

@interface AWECommentLivePhotoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *videoUrl;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long dataSize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
