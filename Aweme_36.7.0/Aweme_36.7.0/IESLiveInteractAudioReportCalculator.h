@interface IESLiveInteractAudioReportCalculator : NSObject {
    unsigned long long _volume[256];
    unsigned long long _totalReportCount;
}

@property (nonatomic) unsigned long long threshold;

- (void)updateWithVolume:(unsigned long long)a0;
- (BOOL)speakStateWithVolume:(unsigned long long)a0;
- (id)init;

@end
