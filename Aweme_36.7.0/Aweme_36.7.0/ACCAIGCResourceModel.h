@class AVURLAsset, NSString;

@interface ACCAIGCResourceModel : AWEBaseBizConfigModel

@property (retain, nonatomic) AVURLAsset *uploadAvasset;
@property (copy, nonatomic) NSString *resourcePath;
@property (nonatomic) long long fileType;
@property (nonatomic) long long resourceMediaType;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } clipRange;
@property (nonatomic) struct CGSize { double width; double height; } exportSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } originDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
