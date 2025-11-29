@class NSString, NSMutableArray;

@interface AWEUserActionRevertManager : NSObject <AWEUserActionRevertManagerProtocol>

@property (retain, nonatomic) NSMutableArray *cacheDatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)showRecommendPersonRevertSnackBar:(id)a0 isFirstLevelPage:(BOOL)a1 dismissBlock:(id /* block */)a2 actionBlock:(id /* block */)a3;
- (void)storePrepareRevertUserAction:(id)a0;
- (void)revertUserActionInScene:(unsigned long long)a0;
- (void)storePrepareRevertUserAction:(unsigned long long)a0 data:(id)a1 indexPath:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
