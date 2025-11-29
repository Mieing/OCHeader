@class AWEXiGuaCommentInputView, NSString, AWEAwemeModel, NSObject;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEXiGuaCommentInputViewBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) AWEXiGuaCommentInputView *xiguaInputView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadDetailTableAdapterClass;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (id)aAWEPadDetailTableAdapter;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
