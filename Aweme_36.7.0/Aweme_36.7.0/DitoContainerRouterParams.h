@class NSString, NSDictionary;

@interface DitoContainerRouterParams : NSObject

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *requestPath;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) NSDictionary *ditoParams;
@property (retain, nonatomic) NSDictionary *mobParams;
@property (nonatomic) BOOL shouldHideSketchNaviBar;
@property (nonatomic) BOOL shouldHideSketchLoadingView;
@property (nonatomic) BOOL shouldHideSketchErrorView;
@property (nonatomic) unsigned long long themeMode;

- (void).cxx_destruct;

@end
