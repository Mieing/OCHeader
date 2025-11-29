@class NSString, NSDictionary, NSNumber;

@interface IESHYHybridContainerConfig : NSObject

@property (nonatomic) BOOL isCardContainer;
@property (nonatomic) unsigned long long kernalType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *originURL;
@property (nonatomic) BOOL hideLoading;
@property (nonatomic) BOOL innerFallback;
@property (copy, nonatomic) NSString *fallbackURL;
@property (nonatomic) BOOL showErrorView;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL enableFontScale;
@property (nonatomic) BOOL enableKitViewReuse;
@property (nonatomic) long long prepareInitDataStartTime;
@property (nonatomic) long long prepareInitDataEndTime;
@property (nonatomic) BOOL enableViewRemove;
@property (copy, nonatomic) NSString *errorPageTheme;
@property (copy, nonatomic) NSString *shortLinkScheme;
@property (copy, nonatomic) NSString *longLinkScheme;
@property (retain, nonatomic) NSNumber *onlyUseXBridgeStandardMethods;
@property (copy, nonatomic) id /* block */ closeBlock;

+ (id)hybridContainerConfigWithSchema:(id)a0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)defaultHybridContainerConfigWithURL:(id)a0 kernalType:(unsigned long long)a1 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)combineConfig:(id)a0 withLongLinkSchema:(id)a1;

- (void)setupValueWithParam:(id)a0;
- (id)initWithPreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 kernal:(unsigned long long)a1 params:(id)a2;
- (void).cxx_destruct;

@end
