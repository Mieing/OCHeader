@class RightButton, NSString, NSArray, HTSLiveItemDotInfo, UIImage, IESLiveAnchorInteractiveGameModel, HTSLiveToolbarItem, NSMutableArray, NSNumber, IESLiveAnchorInteractiveRightButtonExtra;

@interface IESLiveAnchorInteractiveGameItem : IESLiveDynamicModel <NSCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) UIImage *defaultImage;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) long long reddotCount;
@property (copy, nonatomic) NSArray *imageURLArray;
@property (nonatomic) unsigned long long interactID;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameModel *gameModel;
@property (retain, nonatomic) HTSLiveToolbarItem *liveToolbarItem;
@property (nonatomic) long long groupType;
@property (nonatomic) BOOL hasPlayedAtCurrentLive;
@property (nonatomic) BOOL showHighLight;
@property (copy, nonatomic) NSString *currentGameIdentifier;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *sourceFrom;
@property (copy, nonatomic) NSString *extendExtra;
@property (copy, nonatomic) NSNumber *mpOrder;
@property (copy, nonatomic) NSArray *callServerScenes;
@property (retain, nonatomic) HTSLiveItemDotInfo *dotInfo;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) RightButton *rightButton;
@property (retain, nonatomic) IESLiveAnchorInteractiveRightButtonExtra *rightButtonExtra;
@property (copy, nonatomic) NSString *iconLabel;
@property (copy, nonatomic) NSArray *selectKeys;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL clickFromButton;
@property (copy, nonatomic) NSString *startId;
@property (copy, nonatomic) NSString *uploadID;
@property (copy, nonatomic) NSString *effectReplaceTip;
@property (copy, nonatomic) NSString *eventPage;
@property (copy, nonatomic) NSString *titleLabel;
@property (retain, nonatomic) NSMutableArray *highlightLabelArray;
@property (retain, nonatomic) NSMutableArray *highlightDescArray;
@property (retain, nonatomic) NSString *highlightIcon;

+ (id)itemWithAnchorInteractiveGameModel:(id)a0 diContext:(id)a1;
+ (unsigned long long)nativeGameIDWithItem:(id)a0;

- (id)entranceType;
- (BOOL)isOpenKtvEffect;
- (id)reddotIdentifier;
- (void)addObserverForGameModel:(id)a0;
- (id)groupTypeTrackString;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
