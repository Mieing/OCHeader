@class NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveKTVUIDMixGlobalManager : NSObject

@property (copy, nonatomic) NSDictionary *kSongToMixDict;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;

+ (id)sharedInstance;

- (void)updateRoomService:(id)a0;
- (id)getUserIDFromKSongUid:(long long)a0;
- (void)updatePreStreamKSongUidDictionary:(id)a0;
- (void).cxx_destruct;
- (void)clean;

@end
