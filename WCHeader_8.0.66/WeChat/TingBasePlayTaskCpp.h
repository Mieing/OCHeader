@class NSString;

@interface TingBasePlayTaskCpp : TingApiPlayTaskCpp <TingBasePlayTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayEvent:(id)a0 event:(int)a1 msg:(id)a2;
- (void)onPlayInfoEvent:(id)a0 event:(int)a1 msg:(id)a2;
- (void)onProgressChanged:(long long)a0 displayTimeMs:(long long)a1 duration:(long long)a2;

@end
