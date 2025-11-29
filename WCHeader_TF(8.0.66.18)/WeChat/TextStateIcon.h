@class NSString, NSMutableArray;

@interface TextStateIcon : NSObject <TextStateIcon, PBCoding>

@property (nonatomic, readonly) BOOL isDNDMode;
@property (retain, nonatomic) NSMutableArray *candidateAppearances;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *iconId;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSString *customIconDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_candidateAppearances;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_flags;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithIcon:(id)a0;
- (id)initWithIconId:(id)a0 type:(unsigned int)a1 actions:(id)a2;
- (id)initWithIconId:(id)a0 type:(unsigned int)a1 showType:(unsigned int)a2 actions:(id)a3 flags:(unsigned long long)a4;
- (id)actions;
- (id)icon;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)winnerAppearance;
- (id)appearance;
- (void)clearCachedDescription;
- (BOOL)isValidForShow;
- (BOOL)isValidForPublish;
- (id)iconDescription;
- (id)clusterDescription;
- (id)selfStatusDescription;
- (id)withMeClusterDescription;
- (id)otherClusterDescription;
- (BOOL)useOriginImage;
- (id)imageURLString;
- (id)bigImageURLString;
- (id)unreadTextColor;
- (BOOL)isCustom;
- (void).cxx_destruct;

@end
