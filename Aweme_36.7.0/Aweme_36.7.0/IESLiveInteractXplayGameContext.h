@class NSString, HTSLiveLinkmicGameInfo, IESLiveXPlayGameModel;

@interface IESLiveInteractXplayGameContext : NSObject

@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, nonatomic) BOOL isFromSwitchGame;
@property (nonatomic) int targetUiLayout;
@property (retain, nonatomic) HTSLiveLinkmicGameInfo *linkmicGame;
@property (nonatomic) long long fullLinkMixType;
@property (retain, nonatomic) IESLiveXPlayGameModel *xplayModel;
@property (nonatomic) BOOL isFromSwitchScene;

- (BOOL)isUGCGameTargetLayout;
- (id)initWithLinkmicGameInfo:(id)a0;
- (BOOL)isTargetLayoutFoldable1v7;
- (id)initWithXplayModel:(id)a0;
- (void).cxx_destruct;

@end
