@class NSString, AWEAwemeModel, UIView, NSObject;
@protocol AFDMentionFeedBottomBarViewProtocol, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AFDMentionFeedBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView<AFDMentionFeedBottomBarViewProtocol> *replyView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (id)referString;
- (id)enterFrom;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (void)updateLogExtraDict:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
