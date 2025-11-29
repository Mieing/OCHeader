@interface WCFinderDiscoveryNearbyLiveCollectionViewCellConfig : NSObject

@property (nonatomic) BOOL canShowVolumeEduView;
@property (nonatomic) BOOL canShowDescription;
@property (nonatomic) BOOL enableBottomExtraInfo;
@property (nonatomic) double avatorImageDiameter;
@property (nonatomic) double authInfoIconLeftMargin;
@property (nonatomic) double authInfoIconHeight;
@property (nonatomic) double activityImageViewMargin;
@property (nonatomic) double nickNameMargin;
@property (nonatomic) double avatarImageDescLabelMargin;
@property (nonatomic) double descLabelRecommendReasonMargin;
@property (nonatomic) double recommendReasonAvatarMargin;

+ (id)defaultConfig:(id)a0;
+ (id)bannerLiveConfig:(id)a0;

- (void)reset:(id)a0;

@end
