@interface WCFinderBulletGeneralConfig : NSObject

@property (nonatomic) unsigned long long linesNumber;
@property (nonatomic) unsigned long long fontSize;
@property (nonatomic) double strokeColorAlpha;
@property (nonatomic) double strokeWidth;
@property (nonatomic) double landscapeDuration;
@property (nonatomic) double portraitDuration;
@property (nonatomic) double aggregatedAnimationDuration;
@property (nonatomic) double aggregatedAnimationInterval;

- (id)strokeColor;
- (double)duration:(BOOL)a0;
- (id)fontForType:(int)a0;
- (id)fgColorForItem:(id)a0;
- (unsigned long long)numberOfLines:(BOOL)a0;

@end
