@class NSString, UIViewController;
@protocol AWEFollowEmptyHintViewControllerProtocol;

@interface AWEConcernEmptyViewControllerManager : NSObject <AWEConcernEmptyViewControllerManagerProtocol>

@property (retain, nonatomic) UIViewController<AWEFollowEmptyHintViewControllerProtocol> *emptyHintViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)aAWEPadModuleAdapter;
- (void)removeEmptyHintViewControllerIfNeed;
- (void)setupEmptyHintViewController;
- (BOOL)addEmptyHintViewControllerToParentViewcontroller:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
