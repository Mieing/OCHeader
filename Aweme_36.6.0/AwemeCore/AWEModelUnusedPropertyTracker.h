@class NSArray, NSSet, NSMutableDictionary;

@interface AWEModelUnusedPropertyTracker : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL useSonic;
@property (retain, nonatomic) NSArray *enabledComponents;
@property (retain, nonatomic) NSArray *disabledModels;
@property (retain, nonatomic) NSSet *validateModels;
@property (retain, nonatomic) NSMutableDictionary *modelNameToPropertyNameMaps;

+ (id)sharedInstance;

- (BOOL)enableTrack;
- (void)setIsMergingKeys:(BOOL)a0 model:(id)a1;
- (BOOL)shouldValidateModel:(id)a0;
- (BOOL)isMergingKeys:(id)a0;
- (BOOL)shouldTrackProperty:(id)a0 model:(id)a1;
- (void)setModelUnusedPropertyValidateDict:(id)a0;
- (void)setTrackImpl:(void /* function */ *)a0;
- (void)trackUnusedProperty:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
