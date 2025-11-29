@class AWEECMallMessageRedTag, NSMutableDictionary, NSString, AWEECMallBubbleSourceModel;

@interface AWEECMallCompensationManager : NSObject <AWEECMallCompensationManagerProtocol>

@property (nonatomic) BOOL experimentSwitch;
@property (nonatomic) BOOL needSettingsCompensation;
@property (retain, nonatomic) AWEECMallMessageRedTag *cacheBadgeModel;
@property (retain, nonatomic) AWEECMallBubbleSourceModel *cacheBubbleModel;
@property (retain, nonatomic) NSMutableDictionary *priorityMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)observerTabItemShowStatusWith:(id)a0 canShowBadge:(BOOL)a1 canShowBubble:(BOOL)a2;
- (void)handleCacheBubble:(id)a0 result:(long long)a1 source:(id)a2 bizSource:(id)a3;
- (void)handleCacheBadge:(id)a0 result:(long long)a1 bizSource:(id)a2;
- (void)setExperimentItem:(id)a0;
- (void)setPriorityList:(id)a0;
- (void)clearCompensationData;
- (BOOL)higherPriority:(id)a0;
- (void)cacheSettingsShowResult:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
