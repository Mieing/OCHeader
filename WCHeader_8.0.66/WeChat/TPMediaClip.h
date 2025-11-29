@class NSString, NSDictionary, NSURL, TPMediaAssetExtraParam;

@interface TPMediaClip : NSObject <ITPMediaAsset>

@property (nonatomic) int clipId;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) NSURL *filePath;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *httpHeader;
@property (retain, nonatomic) TPMediaAssetExtraParam *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)genTrackClipIdWithMediaType:(long long)a0;
+ (id)mediaTrackClipWithFilePath:(id)a0 mediaType:(long long)a1;

- (id)initWithFilePath:(id)a0 mediaType:(long long)a1;
- (void).cxx_destruct;

@end
