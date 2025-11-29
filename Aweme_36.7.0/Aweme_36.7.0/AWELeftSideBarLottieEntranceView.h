@class NSString, LOTAnimationView, NSTimer, DUXBaseImageView, NSNumber;

@interface AWELeftSideBarLottieEntranceView : UIView <AWELeftSideBarEntranceBussinessViewProtocol>

@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (retain, nonatomic) DUXBaseImageView *lightThemeImageView;
@property (retain, nonatomic) NSTimer *imageTimer;
@property (nonatomic) long long currentThemeStyle;
@property (retain, nonatomic) NSNumber *firstEndFrame;
@property (retain, nonatomic) NSNumber *secondStartFrame;
@property (retain, nonatomic) NSNumber *secondEndFrame;
@property (nonatomic) BOOL shouldShowImageView;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) BOOL hasLightThemeImage;
@property (nonatomic) long long lottieType;
@property (copy, nonatomic) NSString *lightThemeImageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadEntranceViewWithLottieUrl:(id)a0 completion:(id /* block */)a1;
+ (BOOL)loadEntranceViewLottieCompleteWithLottieUrl:(id)a0;

- (BOOL)loadEntranceViewLottieWithLottieUrl:(id)a0;
- (void)loadEntranceViewImageWithUrl:(id)a0 afterTimeToShow:(double)a1 withFailCompletion:(id /* block */)a2;
- (void)leftSideBarEntranceThemeDidChange:(long long)a0;
- (void)adaptLottieForThemeIfNeeded;
- (void)addLightThemeImageViewIfNeeded;
- (BOOL)shouldImageViewAdaptTheme;
- (void)adaptImageViewForThemeIfNeededWithFailCompletion:(id /* block */)a0;
- (void)tryToAdaptLottieForTheme:(long long)a0;
- (void)tryToAdaptImageViewForTheme:(long long)a0;
- (BOOL)shouldAdaptTheme;
- (BOOL)shouldLottieAdaptTheme;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateTimer;
- (void)dealloc;

@end
