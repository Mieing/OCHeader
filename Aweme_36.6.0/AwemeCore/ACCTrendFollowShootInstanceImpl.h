@class NSString, NSObject;

@interface ACCTrendFollowShootInstanceImpl : HTSService <ACCTrendFollowShootInstanceProtocol>

@property (retain, nonatomic) NSObject *trackInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshFollowShootTracker;
- (id)followShootInstanceTracker;
- (void).cxx_destruct;

@end
