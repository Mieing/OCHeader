@class NSNumber, NSString;

@interface AWEFriendsTabUserPitaya : NSObject <AWEFriendsTabUserPitayaProtocol>

@property (retain, nonatomic) NSNumber *isPredictEnterTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (BOOL)enablePredictPreloadByPitaya;
- (void)runTaskOfPredictEnterFamiliarTab:(id /* block */)a0;
- (BOOL)enablePredictEnterFamiliarTab;
- (id)handleEnterFamiliarTab:(id)a0 businessName:(id)a1;
- (BOOL)enablePredictRedDot;
- (id)handlePredictRedDot:(id)a0 businessName:(id)a1;
- (id)getUserProfileWithBusinessName:(id)a0;
- (void).cxx_destruct;

@end
