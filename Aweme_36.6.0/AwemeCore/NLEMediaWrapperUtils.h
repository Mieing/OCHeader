@interface NLEMediaWrapperUtils : NSObject

+ (int)detachAudioStreamFile:(id)a0 videoFiles:(id)a1 timeStarts:(id)a2 timeEnds:(id)a3 timeClipStarts:(id)a4 timeClipEnds:(id)a5 videoSpeeds:(id)a6 dataProgress:(id /* block */)a7 completion:(id /* block */)a8;
+ (BOOL)saveLivePhotoToAlbumWithVideo:(id)a0 Image:(id)a1 Position:(float)a2 completion:(id /* block */)a3;
+ (id)detectAudioLoudnessWithPath:(id)a0 trimIn:(id)a1 trimOut:(id)a2;
+ (id)getAudioWave:(id)a0 waveOption:(int)a1 inTimeStamp:(int)a2 outTimeStamp:(int)a3 pointsCount:(int)a4;
+ (int)extractOriginAudio:(id)a0 videoFiles:(id)a1 timeStarts:(id)a2 timeEnds:(id)a3 atTimes:(id)a4 videoSpeeds:(id)a5;
+ (int)detachAudioStreamFile:(id)a0 videoFiles:(id)a1 timeStarts:(id)a2 timeEnds:(id)a3 videoSpeeds:(id)a4;
+ (id)getAudioBeatsWithFilePath:(id)a0 modelPath:(id)a1 trimIn:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 trimOut:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 slice:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
+ (BOOL)operateGlobalAllowedPaths:(id)a0 type:(unsigned long long)a1;
+ (BOOL)saveLivePhotoToAlbumWithVideo:(id)a0 Image:(id)a1 completion:(id /* block */)a2;
+ (id)jointModels:(id)a0;

@end
