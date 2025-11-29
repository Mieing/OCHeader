@interface FinderDescCarouselConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL buzzwordCarouselFlag;
@property (nonatomic) BOOL buzzwordCarouselHit;
@property (nonatomic) BOOL buzzwordFavFlag;
@property (nonatomic) BOOL buzzwordFavHit;
@property (nonatomic) BOOL hotcommentFlag;
@property (nonatomic) BOOL hotcommentHit;
@property (nonatomic) BOOL ringtoneFlag;
@property (nonatomic) BOOL ringtoneHit;
@property (nonatomic) unsigned int carouselLatency;
@property (nonatomic) unsigned int videoCarouselLatency;
@property (nonatomic) unsigned int photoCarouselLatency;

+ (void)initialize;

- (void)setPhotoCarouselLatency:(unsigned int)a0;
- (unsigned int)photoCarouselLatency;
- (void)setVideoCarouselLatency:(unsigned int)a0;
- (unsigned int)videoCarouselLatency;
- (void)setCarouselLatency:(unsigned int)a0;
- (unsigned int)carouselLatency;
- (void)setRingtoneHit:(BOOL)a0;
- (BOOL)ringtoneHit;
- (void)setRingtoneFlag:(BOOL)a0;
- (BOOL)ringtoneFlag;
- (void)setHotcommentHit:(BOOL)a0;
- (BOOL)hotcommentHit;
- (void)setHotcommentFlag:(BOOL)a0;
- (BOOL)hotcommentFlag;
- (void)setBuzzwordFavHit:(BOOL)a0;
- (BOOL)buzzwordFavHit;
- (void)setBuzzwordFavFlag:(BOOL)a0;
- (BOOL)buzzwordFavFlag;
- (void)setBuzzwordCarouselHit:(BOOL)a0;
- (BOOL)buzzwordCarouselHit;
- (void)setBuzzwordCarouselFlag:(BOOL)a0;
- (BOOL)buzzwordCarouselFlag;

@end
