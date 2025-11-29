@class NSString, UIColor, NSDate;

@interface AWEStudioImageToVideoConfig : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } outputVideoDuration;
@property (nonatomic) struct CGSize { double width; double height; } outputVideoSize;
@property (copy, nonatomic) NSString *UUIDString;
@property (nonatomic) BOOL hitEffectCache;
@property (nonatomic) BOOL downloadEffectSuccess;
@property (retain, nonatomic) NSDate *downloadEffectStartTime;
@property (retain, nonatomic) NSDate *downloadEffectEndTime;
@property (retain, nonatomic) NSDate *videoExportStartTime;
@property (retain, nonatomic) NSDate *videoExportEndTime;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *inputImagePath;
@property (nonatomic) struct CGSize { double width; double height; } inputImageSize;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *cacheEffectPath;
@property (nonatomic) double scrollTimePerPage;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minDuration;
@property (nonatomic) double bitrate;
@property (nonatomic) unsigned long long fps;
@property (nonatomic) double aspectRatio;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ successBlockV2;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) BOOL cameraEditSupportNLE;

- (id)trackingParams;
- (void)resetComputedProperty;
- (void).cxx_destruct;
- (id)description;

@end
