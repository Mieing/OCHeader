@class NSArray, NSString;

@interface AWECreateiveToolsSimpleFeature : NSObject <AWECreativeToolsFeature>

@property (copy, nonatomic) NSArray *componentClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featureWithComponents:(id)a0;

- (id)initWithComponentClasses:(id)a0;
- (id)initWithFeatureConfig:(id)a0;
- (void).cxx_destruct;

@end
