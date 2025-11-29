@class NSArray, UBEmptySignal, UBBooleanSignal, UBDictionarySignal;
@protocol OMCSegmentMeta;

@interface MJSegmentInspectorViewModel : NSObject

@property (readonly, nonatomic) id<OMCSegmentMeta> segment;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) UBDictionarySignal *valueDidChangeSignal;
@property (readonly, nonatomic) UBBooleanSignal *didFinishSignal;
@property (readonly, nonatomic) UBDictionarySignal *didApplyToAllSignal;
@property (readonly, nonatomic) UBEmptySignal *didResetSignal;
@property (readonly, nonatomic) NSArray *adjustableProtocols;

- (id)initWithSegment:(id)a0 type:(unsigned long long)a1;
- (void)setupSignals;
- (void)notifyAdjustableValueDidChange;
- (void)notifyAdjustableValueDidChangeWithOptions:(unsigned long long)a0;
- (void)notifyDidFinish;
- (void)notifyDidCancel;
- (void)notifyDidApplyToAll:(id)a0;
- (void)notifyDidReset;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isApplyAllSwitchEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)subTitle;
- (BOOL)hasChanges;
- (void).cxx_destruct;

@end
