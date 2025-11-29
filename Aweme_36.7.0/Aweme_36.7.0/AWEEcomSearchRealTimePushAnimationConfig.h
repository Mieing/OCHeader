@interface AWEEcomSearchRealTimePushAnimationConfig : NSObject

@property (nonatomic) float delayBeforeInsertedCardConfig;
@property (nonatomic) double doubleCollectionUpdateDuration;
@property (nonatomic) double doubleBeforeScrollDelay;
@property (nonatomic) double doubleScrollDuration;
@property (nonatomic) double singleCollectionUpdateDuration;
@property (nonatomic) double singleBeforeScrollDelay;
@property (nonatomic) double singleScrollDuration;

- (void)setupWithSettings:(id)a0;
- (double)intervalForScene:(long long)a0 format:(id)a1;
- (float)delayBeforeInsertedCard;
- (id)init;
- (id)initWithSettings:(id)a0;

@end
