@class NSURL, NSString, NSArray;

@interface IESSCExportConfiguration : NSObject

@property (retain, nonatomic) NSURL *temporaryOutputURL;
@property (retain, nonatomic) NSString *fileType;
@property (retain, nonatomic) NSURL *outputURL;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) unsigned long long exportMode;

- (id)createTemporaryURLWithExtension:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
