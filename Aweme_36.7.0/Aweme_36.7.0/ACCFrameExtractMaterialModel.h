@class NSString, AVAsset, NSArray, CLLocation;

@interface ACCFrameExtractMaterialModel : NSObject

@property (retain, nonatomic) NSString *absolutePath;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *metarialId;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double duration;
@property (nonatomic) long long maxCount;
@property (copy, nonatomic) NSArray *times;
@property (copy, nonatomic) NSArray *preloadTimes;
@property (nonatomic) double frameSize;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) NSString *coverImagePath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
