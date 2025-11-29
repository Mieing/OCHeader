@class NSString, UIImage, NSMutableArray;

@interface WCCanvasLongPressCoverView : UIView <WCCanvasImageLoaderObserver>

@property (nonatomic) double duration;
@property (nonatomic) long long spriteType;
@property (nonatomic) long long spriteSizeType;
@property (retain, nonatomic) NSString *spriteImageUrl;
@property (retain, nonatomic) UIImage *spriteImage;
@property (retain, nonatomic) NSMutableArray *spriteImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 duration:(double)a1 spriteType:(long long)a2 spriteSizeType:(long long)a3 spriteImageUrl:(id)a4;
- (void)dealloc;
- (void)generateSpriteImages;
- (void)beginSpriteAnimation;
- (void)beginSpriteAnimationForVerticalMovingFromTop:(BOOL)a0;
- (void)beginSpriteAnimationForSpin;
- (void)beginSpriteAnimationForHorizontalMoving;
- (unsigned int)generateSpriteCountForDensity;
- (unsigned int)generateRandomNumFrom:(unsigned int)a0 to:(unsigned int)a1;
- (void)generateRandomCenterForView:(id)a0;
- (id)generateDelayArrayWithCapacity:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fetchCoreFrameForView:(id)a0;
- (id)fetchImageForUrl:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
