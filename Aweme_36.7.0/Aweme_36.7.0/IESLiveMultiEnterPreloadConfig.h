@class IESLiveDI, IESLiveSingleRoomPreloadEntity;

@interface IESLiveMultiEnterPreloadConfig : NSObject

@property (nonatomic) BOOL preloadRoom;
@property (retain, nonatomic) IESLiveDI *roomDI;
@property (weak, nonatomic) IESLiveSingleRoomPreloadEntity *preloadEntity;
@property (nonatomic) BOOL requestIgnoreVS;

- (void).cxx_destruct;

@end
