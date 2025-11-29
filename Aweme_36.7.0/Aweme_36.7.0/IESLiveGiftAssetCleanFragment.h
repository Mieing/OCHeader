@class IESLiveGiftAssetCleanStore;

@interface IESLiveGiftAssetCleanFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveGiftAssetCleanStore *store;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentCreate;
- (void)componentMount;
- (void)componentDestroy;
- (void).cxx_destruct;

@end
