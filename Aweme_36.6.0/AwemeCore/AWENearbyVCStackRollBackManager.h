@class NSMutableDictionary;

@interface AWENearbyVCStackRollBackManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *rollBackStatusInfo;

+ (void)presentVCStack:(id)a0 byPresentingVC:(id)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)setLiveRoomMute:(BOOL)a0;
- (void)clearViewControllerStackWithPageType:(long long)a0;
- (BOOL)popViewControllerStackWithPageType:(long long)a0;
- (BOOL)stashViewControllerStackWithPageType:(long long)a0;
- (void)p_clearViewControllerStackWithPageType:(long long)a0;
- (id)rollBackStatusModelWithPageTypeID:(long long)a0;
- (id)removePresentVCWithMultiPresented:(id)a0;
- (id)removeLastUnStashVCWithVCStack:(id)a0;
- (void)dealtStackAndPresentedWithPageType:(long long)a0 trackParams:(id)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
