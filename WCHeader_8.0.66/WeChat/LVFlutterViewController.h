@class NSDictionary;

@interface LVFlutterViewController : MMFlutterViewController

@property (retain, nonatomic) NSDictionary *params;

+ (id)createWithParam:(id)a0;
+ (id)extraPlugins;
+ (id)routeName;
+ (BOOL)checkArrayOnlyHasBasicElement:(id)a0;
+ (BOOL)checkDictionaryOnlyHasBasicElement:(id)a0;
+ (id)commonReportParams;

- (void)viewDidLoad;
- (void).cxx_destruct;

@end
