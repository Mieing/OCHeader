@class NSString, MMKV;

@interface AWEUGFreqControlsServiceImpl : HTSService <AWEUGFreqControlsService>

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldTriggerEvent:(id)a0 withFreqControls:(id)a1;
- (void)recordEventTriggered:(id)a0;
- (void)clearAllEventRecord;
- (double)getCurrTime;
- (void)p_sortRecord:(id)a0;
- (BOOL)p_checkShowFrequency:(double)a0 current:(double)a1 inRecord:(id)a2 maxCount:(long long)a3;
- (BOOL)p_checkElapsedTimeWithinRange:(double)a0 currTime:(double)a1 range:(long long)a2;
- (BOOL)p_canShowAtFrequency:(id)a0 withEventID:(id)a1;
- (BOOL)p_canShowWithHideStrategy:(id)a0 eventID:(id)a1;
- (void).cxx_destruct;

@end
