@class NSString, UIImageView, UILabel, UIView;
@protocol AWEModernFeedCellContext;

@interface AWESearchAIGCErrorReAnswerView : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIView *reAnswerView;
@property (retain, nonatomic) UIImageView *reAnswerImageView;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)updateTheme:(unsigned long long)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)reloadWithThemeChange;
- (void)reAnswer:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (id)componentView;
- (void)createUI;

@end
