@class AWEHomepageLeftLoginEntranceController, NSString;

@interface AWEHomepageLeftLoginEntranceManager : HTSService <AWEHomepageLeftLoginEntranceControllerDelegate, AWEHomepageLeftLoginEntranceProtocol>

@property (retain, nonatomic) AWEHomepageLeftLoginEntranceController *entranceController;
@property (copy, nonatomic) id /* block */ updateLeftEntranceBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftLoginEntranceView;
- (BOOL)enableLeftLogin;
- (struct CGSize { double x0; double x1; })leftLoginSize;
- (void)registerHomepageLeftEntranceIfNeedBlock:(id /* block */)a0;
- (void)handleUpdateHomepageLeftEntrance;
- (void).cxx_destruct;

@end
