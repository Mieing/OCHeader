@class LiveMultiplatformNativeApiFlutterPlugin;

@interface MMFinderLiveFlutterViewController : MMFlutterViewController

@property (retain, nonatomic) LiveMultiplatformNativeApiFlutterPlugin *commonHybridPlugin;

- (id)initWithRouter:(id)a0 params:(id)a1;
- (void)viewDidLoad;
- (id)createFlutterInstance:(id)a0 arguments:(id)a1;
- (void)setupFlutterPluginsForEngine:(id)a0;
- (void)setupMMFlutterPluginsForInstance:(id)a0;
- (id)customFlutterPluginClasses;
- (void).cxx_destruct;

@end
