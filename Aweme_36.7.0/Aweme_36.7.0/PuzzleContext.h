@class NSString, PuzzleContextExtraModel, NSArray, PuzzleHybridFullLinkMonitor, NSDictionary, PuzzleBeanFactory, NSMapTable, NSNumber;

@interface PuzzleContext : NSObject

@property (retain, nonatomic) NSString *latchID;
@property (copy, nonatomic) NSString *latchLoadingUrl;
@property (copy, nonatomic) NSNumber *latchStartTime;
@property (copy, nonatomic) NSMapTable *weakObjects;
@property (copy, nonatomic) NSMapTable *strongObjects;
@property (retain, nonatomic) PuzzleHybridFullLinkMonitor *hybridFullLinkMonitor;
@property (nonatomic) BOOL enableAnnieXContainerCard;
@property (nonatomic) BOOL disableAnnieXCardViewDidUpdate;
@property (nonatomic) BOOL enableAnnieXPreCreate;
@property (nonatomic) BOOL enableAnnieXWebWarmup;
@property (copy, nonatomic) NSString *initialURLString;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *virtualAid;
@property (nonatomic) BOOL onlyUseXBridgeStandardMethods;
@property (copy, nonatomic) NSArray *globalPropsBlockList;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSDictionary *routerParam;
@property (copy, nonatomic) NSString *kitViewScene;
@property (copy, nonatomic) NSDictionary *trackerParam;
@property (retain, nonatomic) PuzzleContextExtraModel *extraModel;
@property (retain, nonatomic) NSNumber *secLinkV2Mode;
@property (retain, nonatomic) PuzzleBeanFactory *bean;
@property (copy, nonatomic) id /* block */ needIntercept;
@property (copy, nonatomic) id /* block */ puzzlePopupAnimationBlock;

- (void)setWeakObject:(id)a0 forKey:(id)a1;
- (void)setStrongObject:(id)a0 forKey:(id)a1;
- (id)mapTables;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
