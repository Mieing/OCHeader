@class NSString, AWEAwemeModel, UIView, NSObject;
@protocol AWEIMFeedVideoQuickReplayProtocol, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEImBottomInputViewBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) UIView *imBottomInputbarView;
@property (retain, nonatomic) id<AWEIMFeedVideoQuickReplayProtocol> imBottomInputbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_makeExtraLogInfoForSharingWithAwemeModel:(id)a0 fromAweme:(id)a1 context:(id)a2 referString:(id)a3;
+ (id)shareContextFromCurrentCellConrtoller:(id)a0 referString:(id)a1;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)updateCurrentIndexPath:(long long)a0;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
