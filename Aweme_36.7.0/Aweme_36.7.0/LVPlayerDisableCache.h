@class NSMutableDictionary;

@interface LVPlayerDisableCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *disableFeautreFlipXMap;
@property (retain, nonatomic) NSMutableDictionary *disableFeautreFlipYMap;
@property (retain, nonatomic) NSMutableDictionary *disableFeautreBeautyMap;
@property (retain, nonatomic) NSMutableDictionary *disableFeautreChromaMap;
@property (retain, nonatomic) NSMutableDictionary *disableFeautreSeparatedSoundMap;

- (void)clearDisableFeatureType:(unsigned long long)a0;
- (void)disableFeatureType:(unsigned long long)a0 segmentId:(id)a1;
- (void)removeDisableFeatureType:(unsigned long long)a0 segmentId:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
