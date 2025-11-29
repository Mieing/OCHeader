@class NSString, NSURL, NSArray;

@interface TAVSourceExportConfiguration : NSObject

@property (retain, nonatomic) NSString *fileType;
@property (retain, nonatomic) NSURL *outputURL;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

- (id)init;
- (id)temporaryExportURL;
- (void).cxx_destruct;

@end
