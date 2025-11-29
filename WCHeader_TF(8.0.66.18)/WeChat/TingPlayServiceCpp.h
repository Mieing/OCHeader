@class NSString;

@interface TingPlayServiceCpp : TingPlayTaskControllerListenerCpp <TingPlayService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)playSingleListenIdWithPlayTask:(id)a0 fromScene:(int)a1 task:(id)a2;
+ (id)taskServiceFromTaskSnapshot:(id)a0 info:(id)a1;

- (id)playingTask;
- (void)playSingle:(id)a0 info:(id)a1;
- (void)playTaskSnapshot:(id)a0 info:(id)a1;
- (BOOL)isPlayingItem:(id)a0;
- (BOOL)isPlayingClientId:(id)a0;

@end
