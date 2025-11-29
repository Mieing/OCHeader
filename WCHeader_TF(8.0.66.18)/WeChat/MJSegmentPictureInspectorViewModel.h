@class NSArray;

@interface MJSegmentPictureInspectorViewModel : MJSegmentInspectorViewModel {
    float _brightnessOriginalValue;
    float _contrastOriginalValue;
    float _saturationOriginalValue;
    float _temperatureOriginalValue;
    float _sharpnessOriginalValue;
    float _vignetteOriginalValue;
}

@property (retain, nonatomic) NSArray *valueItems;

- (id)initWithSegment:(id)a0 type:(unsigned long long)a1;
- (void)setupOriginalValues;
- (void)setupMenuItems;
- (void)handleAdjustActionWithItem:(id)a0;
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
- (void).cxx_destruct;

@end
