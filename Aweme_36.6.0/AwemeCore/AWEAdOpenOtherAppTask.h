@interface AWEAdOpenOtherAppTask : AWEAdBasicTask

- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (void)taskDidExcutedWithResult:(BOOL)a0;
- (void)asyncTaskExcute;
- (BOOL)isAsyncTask;
- (id)replaceBackURLWithCreativeID:(id)a0 groupID:(id)a1 logExtra:(id)a2 eventName:(id)a3 label:(id)a4 extra:(id)a5 disableTrack:(BOOL)a6 extraRefer:(id)a7;
- (void)recordBackFlowADTrackData:(id)a0;

@end
