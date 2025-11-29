@class NSString;

@interface TingAudioRecorderBufferObjc : UnitRCObjcBaseClass <TingAudioRecorderBuffer>

@property (nonatomic) unsigned long long bufferId;
@property (nonatomic) float peakPower;
@property (nonatomic) BOOL isFinal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getBufferId;
- (float)getPeakPower;
- (BOOL)getIsFinal;

@end
