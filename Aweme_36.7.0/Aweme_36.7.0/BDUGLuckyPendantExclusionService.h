@class NSString, NSMutableArray;
@protocol BDUGLuckyPendantProtocol;

@interface BDUGLuckyPendantExclusionService : NSObject <BDUGLuckyPendantExclusionServiceProtocol>

@property (retain, nonatomic) NSMutableArray *pendantShowers;
@property (weak, nonatomic) id<BDUGLuckyPendantProtocol> currentPendantShower;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)updateCurrentItemID:(id)a0;
- (void)registerPendantShower:(id)a0;
- (void)unRegisterPendantShower:(id)a0;
- (void)updatePendantShowerIfNeeded;
- (void).cxx_destruct;

@end
