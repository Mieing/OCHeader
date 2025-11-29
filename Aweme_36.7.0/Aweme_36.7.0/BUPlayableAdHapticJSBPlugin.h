@class NSArray, NSString;
@protocol BUPlayableHapticPlayer;

@interface BUPlayableAdHapticJSBPlugin : NSObject <BUPlayableAdJSBPlugin>

@property (retain, nonatomic) id<BUPlayableHapticPlayer> hapticPlayer;
@property (copy, nonatomic) NSArray *methodList;
@property (copy, nonatomic) id /* block */ sendEventBlock;
@property (copy, nonatomic) NSString *prefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bupl_playable_haptic_engine_supportsWithParam:(id)a0;
- (id)bupl_playable_haptic_engine_initWithParam:(id)a0;
- (id)bupl_playable_haptic_engine_playWithParam:(id)a0;
- (id)bupl_playable_haptic_engine_stopWithParam:(id)a0;
- (id)bupl_playable_haptic_engine_pauseWithParam:(id)a0;
- (id)bupl_playable_haptic_engine_resumeWithParam:(id)a0;
- (id)bupl_playable_haptic_engine_invalidateWithParam:(id)a0;
- (id)bupl_playable_haptic_engine_play_fileWithParam:(id)a0;
- (id)bupl_playable_haptic_engine_play_innerWithParam:(id)a0;
- (void).cxx_destruct;

@end
