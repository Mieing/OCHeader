@class NSPointerArray;

@interface AWEPlayVideoRecorder : NSObject

@property (retain, nonatomic) NSPointerArray *players;
@property (nonatomic) BOOL enableRecord;

+ (id)sharedInstance;

- (id)currentPlayVideoViewController;
- (id)currentPlayerList;
- (id)currentInWindowPlayerList;
- (void).cxx_destruct;
- (id)init;
- (void)removePlayer:(id)a0;
- (void)addPlayer:(id)a0;

@end
