@class NSArray;

@interface MMLiveGamePrepareVisibilityCell : MMLiveGamePrepareOptionCell

@property (retain, nonatomic) NSArray *visibleRoomIds;
@property (retain, nonatomic) NSArray *visibleUserNames;
@property (nonatomic) long long lastSelectMode;
@property (nonatomic) int liveMode;

- (void)updateWithVisibleRoomIds:(id)a0 visibleUserNames:(id)a1 firstVisibleUserName:(id)a2 selectMode:(long long)a3 liveMode:(int)a4;
- (void).cxx_destruct;

@end
