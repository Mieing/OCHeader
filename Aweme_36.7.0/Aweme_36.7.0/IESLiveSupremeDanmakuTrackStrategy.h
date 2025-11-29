@class NSString;

@interface IESLiveSupremeDanmakuTrackStrategy : NSObject <IESEZDanmakuTrackStrategyProtocol>

@property (nonatomic) BOOL disable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)danmakuData:(id)a0 findAvailableTracksInTracks:(id)a1;

@end
