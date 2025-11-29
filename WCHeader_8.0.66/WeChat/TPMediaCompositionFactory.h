@interface TPMediaCompositionFactory : NSObject

+ (id)createMediaComposition;
+ (id)createMediaTrackWithTrackId:(int)a0 mediaType:(long long)a1;
+ (id)createMediaTrackWithTrackId:(int)a0 mediaType:(long long)a1 trackClips:(id)a2;
+ (id)createEmptyMeidaClipWithFilePath:(id)a0 mediaType:(long long)a1 beginTimeMs:(long long)a2 endTimeMs:(long long)a3;
+ (id)createRtcMediaAsset;
+ (id)createUrlMediaAsset;

@end
