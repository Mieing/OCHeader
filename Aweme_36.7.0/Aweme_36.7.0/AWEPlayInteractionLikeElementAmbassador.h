@class NSString, AWEAwemeModel;

@interface AWEPlayInteractionLikeElementAmbassador : AFDAmbassador <AWEPlayInteractionLikeElementAmbassadorProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *refactorLottieFilePath;
@property (copy, nonatomic) NSString *likeLottiePath;
@property (copy, nonatomic) NSString *disLikeLottiePath;
@property (copy, nonatomic) NSString *likeButtonIconBeforePath;
@property (copy, nonatomic) NSString *likeButtonIconAfterPath;
@property (copy, nonatomic) NSString *diggAnimationImagePath;
@property (copy, nonatomic) NSString *likeButtonLabelString;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diggButtonType;
- (id)fetchDiggAnimationImage;
- (id)fetchLikeButtonLabelString;
- (id)likeAnimationStartFrame;
- (id)likeAnimationEndFrame;
- (id)dislikeAnimationStartFrame;
- (id)dislikeAnimationEndFrame;
- (id)fetchNewLottieAnimationView;
- (void)__cleanUp;
- (void)__setupLottieResource;
- (BOOL)__isLottieResourceReady;
- (id)__likeLottieDivideFrame;
- (id)__likeLottieTotalFrame;
- (id)__fetchContentFromSettingsWithKey:(id)a0;
- (void)trackIconAlienation:(long long)a0 reason_for_failure:(id)a1;
- (id)__fetchResourcePathFromGeckoWithKey:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;

@end
