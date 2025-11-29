@class NSString, OMJMovieExportSettings;

@interface MJMovieComposingAsyncExportInfo : NSObject

@property (retain, nonatomic) NSString *clipBundleID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *outputFilePath;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) double exportVideoDuration;
@property (retain, nonatomic) OMJMovieExportSettings *exportSettings;
@property (nonatomic) struct CGSize { double width; double height; } renderPointSize;
@property (retain, nonatomic) NSString *asyncTaskID;
@property (nonatomic) unsigned long long clipBundleSize;
@property (nonatomic) double clipBundleGenerationTime;

- (id)initWithClipBundleID:(id)a0 asyncTaskID:(id)a1 sessionID:(id)a2 outputFilePath:(id)a3 exportSettings:(id)a4 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a5 exportVideoDuration:(double)a6 renderPointSize:(struct CGSize { double x0; double x1; })a7;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearAsyncTaskInfo;
- (id)description;
- (void).cxx_destruct;

@end
