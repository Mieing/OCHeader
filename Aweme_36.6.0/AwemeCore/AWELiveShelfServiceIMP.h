@class NSString, NSObject;
@protocol AWELiveShelfService;

@interface AWELiveShelfServiceIMP : HTSService <AWELiveShelfService>

@property (weak, nonatomic) NSObject<AWELiveShelfService> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isWeakBCAAInstance;
- (id)getLiveRoomInfo;
- (BOOL)openNativeLiveShelfWithSource:(id)a0 type:(long long)a1 params:(id)a2;
- (id)getLiveRoomCouponInfo;
- (BOOL)shelfPageIsOpenNow;
- (id)getLiveStrategyData:(id)a0;
- (id)commonTrackerParameter;
- (id)getLiveLocalLifeFragment;
- (void).cxx_destruct;

@end
