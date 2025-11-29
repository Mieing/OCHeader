@class NSLock, NSMutableArray, NSMutableData;

@interface IESAudioVolumConvertGroup : NSObject {
    NSMutableArray *volumesArray;
    NSMutableData *volumesData;
    unsigned long long volumeWidth;
}

@property (retain, nonatomic) NSLock *volumesDataLock;
@property (nonatomic) BOOL enableWaveformDataExtractOpt;

- (id)getVolumePoints;
- (id)p_createAudioConfig:(int)a0 audioEffectConfig:(id)a1 sliceTime:(double)a2 sliceDuration:(double)a3;
- (id)getVolumeData;
- (id)getDBFSPoints;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
