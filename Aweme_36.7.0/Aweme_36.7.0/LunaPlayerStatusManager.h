@class NSPointerArray;

@interface LunaPlayerStatusManager : NSObject

@property (retain, nonatomic) NSPointerArray *listeners;
@property (readonly, nonatomic) BOOL isPlaying;

+ (id)shared;

- (void)addMusicService:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
