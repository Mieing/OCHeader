@class UIImage;

@interface AFDMomentNowPostInfoLocalStorage : NSObject

@property (readonly, nonatomic) long long beforeDockCorner;
@property (nonatomic) long long dockCorner;
@property (nonatomic) BOOL isFlipped;
@property (nonatomic) long long beforePipType;
@property (readonly, nonatomic) long long pipType;
@property (retain, nonatomic) UIImage *cachedBackImage;
@property (retain, nonatomic) UIImage *cachedFrontImage;

- (void).cxx_destruct;

@end
