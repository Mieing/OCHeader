@interface LiveRealnameFeatureInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL threeTabCanUseRealnameLikeFeature;
@property (nonatomic) BOOL grayoutRealnameLikeButton;
@property (nonatomic) BOOL allowCancelRealnameLikeAfterLiveEnd;
@property (nonatomic) unsigned int realnameLikeIconType;

+ (void)initialize;

- (void)setRealnameLikeIconType:(unsigned int)a0;
- (unsigned int)realnameLikeIconType;
- (void)setAllowCancelRealnameLikeAfterLiveEnd:(BOOL)a0;
- (BOOL)allowCancelRealnameLikeAfterLiveEnd;
- (void)setGrayoutRealnameLikeButton:(BOOL)a0;
- (BOOL)grayoutRealnameLikeButton;
- (void)setThreeTabCanUseRealnameLikeFeature:(BOOL)a0;
- (BOOL)threeTabCanUseRealnameLikeFeature;

@end
