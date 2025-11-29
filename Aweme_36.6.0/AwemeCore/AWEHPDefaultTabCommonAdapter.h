@class NSArray, NSString;

@interface AWEHPDefaultTabCommonAdapter : NSObject <AWEHPDefaultTabCommonAdapter>

@property (readonly, copy, nonatomic) NSArray *bottomTabIDList;
@property (readonly, copy, nonatomic) NSArray *topTabItemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)setupForPad;
- (void)setupForElder;
- (void)setupForDefault;
- (id)getBottomTabIDList;
- (id)p_generateRecommendTabForAB;
- (id)p_generateRecommendTab;
- (BOOL)serverEnable;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (id)weakTarget;

@end
