@class NSString, NSDictionary;

@interface AWEGDHalfContainerParams : HalfContainerParams

@property (nonatomic) BOOL isFirstTimeReload;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL notFirstTime;
@property (nonatomic) BOOL isArriving;
@property (nonatomic) BOOL hideJumpAnimation;
@property (nonatomic) BOOL fromLive;
@property (nonatomic) BOOL isFromNearbySecondJump;
@property (nonatomic) BOOL initFullType;
@property (nonatomic) double topOffset;
@property (nonatomic) double baseOffset;
@property (nonatomic) long long closeType;
@property (copy, nonatomic) NSString *nearbySessionId;
@property (copy, nonatomic) NSString *liveWindowRoomID;
@property (retain, nonatomic) NSDictionary *originalParams;

- (void)updateParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)containerType;

@end
