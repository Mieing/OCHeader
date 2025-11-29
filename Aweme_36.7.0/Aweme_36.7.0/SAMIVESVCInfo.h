@class NSString, AVURLAsset;

@interface SAMIVESVCInfo : NSObject

@property (nonatomic) unsigned long long curTime;
@property (nonatomic) unsigned long long totalTime;
@property (retain, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) AVURLAsset *srcAsset;
@property (retain, nonatomic) NSString *srcPath;
@property (retain, nonatomic) NSString *spkID;
@property (retain, nonatomic) NSString *targetPath;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

+ (id)infoOfAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 targetPath:(id)a2 spkID:(id)a3;

- (void).cxx_destruct;

@end
