@class BattleArmy;
@protocol IESLiveRoomService;

@interface HTSLivePKContributeEntity : NSObject

@property (retain, nonatomic) BattleArmy *listData;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)updateWithRankList:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
