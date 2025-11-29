@class NSString, NSDictionary, AWEAwemeModel, UIView, AWEECommerceBuyButtonViewBarContext, UILabel;

@interface AWEECommerceBuyButtonViewBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEECommerceBuyButtonViewBarContext *context;
@property (readonly, copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)updateCurrentIndexPath:(long long)a0;
- (void)updateBuyButtonWith:(id)a0;
- (id)getTrackParamsFromModel;
- (void)tapBuyButton;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
