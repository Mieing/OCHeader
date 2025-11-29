@class RightButton, NSString, NSArray, IESLiveAnchorInteractiveGameOpenPlatformGameExtra, HTSLiveItemDotInfo, NSDictionary, IESLiveAnchorInteractiveBaseExtra, NSMutableArray, IESLiveAnchorInteractiveDebugButtonExtra, IESLiveAnchorInteractiveRightButtonExtra;

@interface IESLiveAnchorInteractiveGameModel : IESLiveDynamicModel <NSCoding>

@property (nonatomic) unsigned long long interactID;
@property (retain, nonatomic) IESLiveAnchorInteractiveBaseExtra *baseExtra;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *iconURL;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) long long groupType;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) RightButton *rightButton;
@property (retain, nonatomic) IESLiveAnchorInteractiveRightButtonExtra *rightButtonExtra;
@property (retain, nonatomic) IESLiveAnchorInteractiveDebugButtonExtra *debugButtonInfo;
@property (copy, nonatomic) NSString *iconLabel;
@property (copy, nonatomic) NSArray *selectKeys;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long reddotCount;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *extendExtra;
@property (copy, nonatomic) NSArray *callServerScenes;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameOpenPlatformGameExtra *openPlatformExtra;
@property (nonatomic) unsigned long long explainStatus;
@property (copy, nonatomic) NSString *opendId;
@property (retain, nonatomic) HTSLiveItemDotInfo *dotInfo;
@property (nonatomic) BOOL isGameRunning;
@property (nonatomic) BOOL isWatcher;
@property (nonatomic) BOOL isFromSwitchAction;
@property (nonatomic) BOOL isRevertLive;
@property (copy, nonatomic) NSString *revertStartId;
@property (copy, nonatomic) NSDictionary *xplayAppExtra;
@property (copy, nonatomic) NSString *xplayEntranceSchema;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *oeSource;
@property (copy, nonatomic) NSString *titleLabel;
@property (retain, nonatomic) NSMutableArray *highlightLabelArray;
@property (retain, nonatomic) NSMutableArray *highlightDescArray;
@property (retain, nonatomic) NSString *highlightIcon;

- (void)resolveExtra;
- (BOOL)isXplay;
- (id)reddotIdentifier;
- (BOOL)showReddot;
- (BOOL)isSupportSceneMulti;
- (BOOL)isSupportLiveEntranceWithInteractiveScene:(unsigned long long)a0;
- (BOOL)isSupportLiveScene:(unsigned long long)a0;
- (id)nativeAppID;
- (id)tipIdentifierPrefix;
- (BOOL)isPKSpecialBattle;
- (BOOL)pr_isNonGameItem;
- (void)resolveButtonExtra;
- (void)resolveDebugInfoButton;
- (id)createNewGameModel;
- (void)resolveExplainCardExtra:(id)a0;
- (long long)gameId;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (BOOL)isEqual:(id)a0;

@end
