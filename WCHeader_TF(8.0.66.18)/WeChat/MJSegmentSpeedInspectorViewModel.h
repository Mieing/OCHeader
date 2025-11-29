@interface MJSegmentSpeedInspectorViewModel : MJSegmentInspectorViewModel {
    double _speedOriginalRatio;
    double _rawSpeedOriginalRatio;
}

@property (nonatomic) double speedRatio;
@property (nonatomic) double rawSpeedRatio;

- (id)initWithSegment:(id)a0 type:(unsigned long long)a1;
- (void)dealloc;
- (id)speedRatioTextByRawSpeedRatio:(double)a0;
- (void)handleConfigRawSpeedRatio:(double)a0;
- (double)segmentedLinearMappingToSpeedValue:(double)a0;
- (double)reverseSegmentedLinearMappingToSpeedValue:(double)a0;
- (double)mappingToSpeedValue:(double)a0;
- (double)reverseMappingFromSpeedValue:(double)a0;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (void)notifyDidCancel;
- (void)notifyDidReset;
- (void)setValuesToOriginal;
- (void)notifyDidApplyToAll:(id)a0;

@end
