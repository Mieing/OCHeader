@class NSString;

@interface MMFinderLiveKTVSEIRecvSession : NSObject

@property (retain) NSString *actorUserId;
@property (retain) NSString *songUniqueId;
@property (retain) NSString *actorSongUniqueId;
@property (retain) NSString *actUniqueId;

+ (id)createSessionWithActor:(id)a0 song:(id)a1 singByActor:(BOOL)a2 actUId:(id)a3;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
