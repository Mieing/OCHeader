@class NSString, OMJMovieExportSettings;

@interface MJTemplateAsyncExportInfo : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *clipBundleID;
@property (copy, nonatomic) NSString *asyncTaskID;
@property (nonatomic) double exportVideoDuration;
@property (retain, nonatomic) OMJMovieExportSettings *exportSettings;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearAsyncTaskInfo;
- (void).cxx_destruct;

@end
