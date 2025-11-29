@class NSString, UIImageView, UIView, NSObject, DUXBaseLabel;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWELiteShareFissionInnerFeedBottomViewBarController : NSObject <AWELiteShareFissionInnerFeedMessage, AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIView *bottomBarView;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) UIImageView *shareButtonView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) DUXBaseLabel *shareTipsLabel;
@property (retain, nonatomic) UIView *shareContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteShareFissionInnerFeedDOUYINLiteAdapterClass;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (id)aAWELiteShareFissionInnerFeedDOUYINLiteAdapter;
- (void)updateShareElementRewardInfo:(BOOL)a0 shareAmount:(long long)a1 taskStatus:(long long)a2 statusCode:(long long)a3 rewardText:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)contextClass;
- (void)shareButtonTapped;

@end
