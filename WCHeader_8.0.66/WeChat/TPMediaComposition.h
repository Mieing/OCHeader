@class NSArray, NSString, NSDictionary, NSMutableArray, TPMediaAssetExtraParam;

@interface TPMediaComposition : NSObject <ITPMediaAsset>

@property (retain, nonatomic) NSMutableArray *innerTracks;
@property (nonatomic) int videoSequence;
@property (nonatomic) int audioSequence;
@property (nonatomic) int avSequence;
@property (readonly, copy, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } audioDuration;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *httpHeader;
@property (retain, nonatomic) TPMediaAssetExtraParam *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)addMediaTrackWithMediaType:(long long)a0;
- (void)removeTrack:(id)a0;
- (id)trackWithTrackID:(int)a0;
- (id)tracksWithMediaType:(long long)a0;
- (int)genVideoTrackSequence;
- (int)genAudioTracksequence;
- (int)genAVTracksequence;
- (void).cxx_destruct;

@end
