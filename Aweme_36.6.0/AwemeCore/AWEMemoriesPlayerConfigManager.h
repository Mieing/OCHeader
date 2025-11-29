@class AWEMemoriesPlayerConfigBottomBuilder, NSString, AWEMemoriesPlayerConfigContentDisplayAreaBuilder, AWEMemoriesPlayerConfigGestureBuilder, AWEMemoriesPlayerConfigTopBuilder;

@interface AWEMemoriesPlayerConfigManager : NSObject <AWEMemoriesPlayerConfigProtocol, AWEMemoriesPlayerChangedBlockNotiInfo>

@property (copy, nonatomic) id /* block */ tileModelChanged;
@property (retain, nonatomic) AWEMemoriesPlayerConfigTopBuilder *topBuilder;
@property (retain, nonatomic) AWEMemoriesPlayerConfigBottomBuilder *bottomBuilder;
@property (retain, nonatomic) AWEMemoriesPlayerConfigGestureBuilder *gestureBuilder;
@property (retain, nonatomic) AWEMemoriesPlayerConfigContentDisplayAreaBuilder *contetnAreaBuilder;
@property (copy, nonatomic) NSString *emptyViewText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configTopBarWithBuilder:(id /* block */)a0;
- (void)configBottomBarWithBuilder:(id /* block */)a0;
- (void)configGestureWithBuilder:(id /* block */)a0;
- (void)updatePlayerFromCurrentPlayerTileModelChanged:(id /* block */)a0;
- (void)configContentAreaWithBuilder:(id /* block */)a0;
- (void)updateCurrentPlayerTileModel:(id)a0;
- (void).cxx_destruct;

@end
