@class NSArray, AWEVideoFragmentInfo;

@interface ACCEffectTrackViewModel : ACCRecorderViewModel

@property (retain, nonatomic) AWEVideoFragmentInfo *currentFragment;
@property (copy, nonatomic) NSArray *effectTrackParams;
@property (copy, nonatomic) id /* block */ currentStickerHandler;

- (void)trackRecordWithEvent:(id)a0 params:(id)a1 withCommonParams:(BOOL)a2;
- (void)updateEffectTrackModelWithParams:(id)a0 type:(unsigned long long)a1;
- (void)clearTrackParamsCache;
- (void).cxx_destruct;
- (void)addFragment:(id)a0;

@end
