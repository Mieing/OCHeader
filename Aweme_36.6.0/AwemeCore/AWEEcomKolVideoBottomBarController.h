@class NSString, AWEEcomKolVideoBottomBarView, NSObject;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEEcomKolVideoBottomBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) AWEEcomKolVideoBottomBarView *bottomView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)p_updateContext;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
