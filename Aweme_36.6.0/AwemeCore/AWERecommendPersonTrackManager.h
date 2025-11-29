@class NSString, NSMutableArray;

@interface AWERecommendPersonTrackManager : NSObject <AWEUserMessage, AWERecommendPersonTrackProtocol>

@property (retain, nonatomic) NSMutableArray *recommendPersons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendUsers;
+ (void)viewRecommendPersonWithReferString:(id)a0 userID:(id)a1;
+ (void)recordRecommendImpressionWithUserID:(id)a0 isItem:(BOOL)a1;
+ (void)save;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (void)clean;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)addTrackNode:(id)a0;
- (void)cleanTrackNodes;
- (void)saveTrackNodes;
- (void)saveTrackNodesWithArray:(id)a0;
- (void).cxx_destruct;
- (void)registerNotifications;
- (id)init;
- (void)unregisterNotifications;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)trackNodes;

@end
