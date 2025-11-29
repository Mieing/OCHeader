@class NSString;

@interface VEAmazingEffectFilterConfig : NSObject

@property (nonatomic) BOOL isUsedForExport;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL enableAlgorithmAsync;
@property (copy, nonatomic) NSString *algoCachePath;
@property (nonatomic) BOOL enableOrientation;

- (void).cxx_destruct;

@end
