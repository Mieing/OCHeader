@class NSString, NSArray;

@interface AWEFeedFlameController : AWEBaseController <AWEFeedControllerProtocol>

@property (copy, nonatomic) NSString *liveBlockInfo;
@property (copy, nonatomic) NSArray *liveBlockArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFlameHTSAdapterClass;

- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)aAWEFlameHTSAdapter;
- (void)updateLiveBlockInfoAndRecheck;
- (void)checkUpdateSceneIsHitLiveBlock;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
