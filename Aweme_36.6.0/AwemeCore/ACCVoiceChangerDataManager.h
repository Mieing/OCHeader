@class NSArray, NSString;

@interface ACCVoiceChangerDataManager : NSObject

@property (retain, nonatomic) NSArray *effects;
@property (nonatomic) BOOL isFectchingEffects;
@property (nonatomic) BOOL enableVoiceConversionEffect;
@property (retain, nonatomic) NSString *pannel;
@property (retain, nonatomic) NSString *category;

- (id)localVoiceEffectList;
- (void)setupEffects:(id)a0;
- (void)setupEnableVoiceConversionEffect:(BOOL)a0;
- (void)fetchVoiceList:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
