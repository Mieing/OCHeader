@class NSArray, NSString, NSDictionary, NSMutableArray, TPMediaAssetExtraParam;

@interface TPMediaTrack : NSObject <ITPMediaAsset>

@property (nonatomic) int trackId;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) NSMutableArray *clipArray;
@property (readonly, nonatomic) NSArray *allTrakClips;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } totalDurationMs;
@property (readonly, copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *httpHeader;
@property (retain, nonatomic) TPMediaAssetExtraParam *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaTrackWithTrackId:(int)a0 mediaType:(long long)a1;
+ (id)mediaTrackWithTrackMediaType:(long long)a0;

- (id)initWithTrackId:(int)a0 mediaType:(long long)a1;
- (BOOL)addTrackClip:(id)a0;
- (BOOL)insertTrackClip:(id)a0 afterClipId:(int)a1;
- (BOOL)removeTrackClip:(id)a0;
- (void)removeAllTrackClips;
- (id)trackClipWithId:(int)a0;
- (void).cxx_destruct;

@end
