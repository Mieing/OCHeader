@interface OMCVocalAdjustmentParams : NSObject

@property (nonatomic) float loudness;
@property (nonatomic) float duration;
@property (nonatomic) float defaultLoudness;
@property (nonatomic) float minLoudness;
@property (nonatomic) float maxLoudness;

- (id)init;
- (id)description;

@end
