@class AWEButton, NSString, UIImageView, AWEAwemeModel, UIView, NSObject, UILabel;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEBottomVideoDiaryBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) AWEButton *publishButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)trackVideoDiaryWithEvent:(id)a0;
- (void)onPublishButtonTapped:(id)a0;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
