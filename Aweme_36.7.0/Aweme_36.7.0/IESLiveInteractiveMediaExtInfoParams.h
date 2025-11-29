@interface IESLiveInteractiveMediaExtInfoParams : NSObject

@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isVideoDynamicEqual;
@property (nonatomic) int layout;
@property (nonatomic) long long guestCount;
@property (nonatomic) long long position;
@property (nonatomic) BOOL isChallengeEnlarge;
@property (nonatomic) BOOL isMainCastEnlarge;
@property (nonatomic) BOOL selfIsEnlarge;
@property (nonatomic) BOOL isEqualEnlargeFullLayout;

- (id)description;

@end
