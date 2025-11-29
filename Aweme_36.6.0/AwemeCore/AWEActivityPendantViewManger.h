@class NSMutableArray;

@interface AWEActivityPendantViewManger : NSObject

@property (retain, nonatomic) NSMutableArray *allPenantViews;
@property (nonatomic) unsigned long long currentState;

+ (id)sharedInstance;

- (void)switchPendantViewState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)showCapsuleMessage:(id)a0;
- (void)registerPendantView:(id)a0;
- (void)hideAllPendant;
- (void).cxx_destruct;

@end
