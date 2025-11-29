@class LiveHybridOpenNativeLiveRoom, LiveHybridOpenNativeProfile;

@interface LiveHybridOpenNativeParams : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) LiveHybridOpenNativeProfile *openProfile;
@property (retain, nonatomic) LiveHybridOpenNativeLiveRoom *openLiveRoom;
@property (nonatomic) long long commentScene;

+ (id)makeWithType:(long long)a0 openProfile:(id)a1 openLiveRoom:(id)a2 commentScene:(long long)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
