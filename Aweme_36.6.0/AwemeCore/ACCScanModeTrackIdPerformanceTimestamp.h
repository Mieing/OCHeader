@class NSString;

@interface ACCScanModeTrackIdPerformanceTimestamp : NSObject <ACCScanModeTrackIdPerformanceTimestampStudioProxy>

@property (nonatomic) unsigned long long trackIdInitTimestamp;
@property (nonatomic) unsigned long long trackIdFectchTagTimestamp;
@property (nonatomic) unsigned long long trackIdShowDotTimestamp;
@property (nonatomic) unsigned long long trackIdShowTagTimestamp;
@property (nonatomic) BOOL shootScanRealityDurationHasTrack;
@property (nonatomic) BOOL fectchTagTimestampHasTrack;
@property (nonatomic) BOOL showDotTimestampHasTrack;
@property (nonatomic) BOOL showTagTimestampHasTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
