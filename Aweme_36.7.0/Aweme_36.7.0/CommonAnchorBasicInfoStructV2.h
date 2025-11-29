@class AnchorActionV2, NSString, AnchorContainerV2, AnchorIconInfoV2, AnchorTextInfoV2, AnchorAnimationV2, AnchorDisplayStrategyV2;

@interface CommonAnchorBasicInfoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (retain, nonatomic) AnchorIconInfoV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) AnchorTextInfoV2 *title;
@property (nonatomic) BOOL hasTitle;
@property (retain, nonatomic) AnchorTextInfoV2 *desc;
@property (nonatomic) BOOL hasDesc;
@property (retain, nonatomic) AnchorTextInfoV2 *subDesc;
@property (nonatomic) BOOL hasSubDesc;
@property (retain, nonatomic) AnchorTextInfoV2 *suffix;
@property (nonatomic) BOOL hasSuffix;
@property (retain, nonatomic) AnchorTextInfoV2 *funcDesc;
@property (nonatomic) BOOL hasFuncDesc;
@property (retain, nonatomic) AnchorAnimationV2 *animation;
@property (nonatomic) BOOL hasAnimation;
@property (retain, nonatomic) AnchorActionV2 *action;
@property (nonatomic) BOOL hasAction;
@property (retain, nonatomic) AnchorContainerV2 *container;
@property (nonatomic) BOOL hasContainer;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (copy, nonatomic) NSString *tracerInfo;
@property (nonatomic) BOOL hasTracerInfo;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) AnchorDisplayStrategyV2 *displayStrategy;
@property (nonatomic) BOOL hasDisplayStrategy;
@property (nonatomic) int subType;
@property (nonatomic) BOOL hasSubType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL hasScene;

+ (id)descriptor;

- (id)scene;
- (int)subType;
- (id)displayStrategy;
- (int)type;
- (id)extra;
- (id)action;
- (id)animation;
- (id)subDesc;
- (id)desc;
- (id)title;
- (id)icon;
- (id)id_p;
- (id)name;

@end
