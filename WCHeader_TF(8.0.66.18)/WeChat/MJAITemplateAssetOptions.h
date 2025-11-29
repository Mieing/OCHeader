@interface MJAITemplateAssetOptions : NSObject

@property (readonly, nonatomic) unsigned long long scene;
@property (nonatomic) int cdnAppType;
@property (nonatomic) int cdnFileType;
@property (nonatomic) Class AIGeneratorClass;
@property (nonatomic) double AIGeneratorTimeoutInterval;
@property (nonatomic) BOOL skipAssetPreparation;

+ (id)optionsForScene:(unsigned long long)a0;

- (id)init;
- (void)_initForMoments;
- (void)_initForFinder;

@end
