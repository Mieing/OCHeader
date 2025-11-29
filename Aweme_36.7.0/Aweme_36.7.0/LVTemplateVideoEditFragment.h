@class NSString, LVMediaSegment, UIImage, LVVideoCropInfo;

@interface LVTemplateVideoEditFragment : NSObject

@property (copy, nonatomic) NSString *payloadID;
@property (retain, nonatomic) LVMediaSegment *segment;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) UIImage *albumImage;
@property (nonatomic) BOOL canReplace;
@property (nonatomic) BOOL isSubVideo;
@property (retain, nonatomic) NSString *relationVideoGroup;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } targetTimeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } sourceTimeRaneg;
@property (readonly, nonatomic) LVVideoCropInfo *crop;
@property (readonly, nonatomic) BOOL isReversed;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, copy, nonatomic) NSString *assetPath;

- (void).cxx_destruct;

@end
