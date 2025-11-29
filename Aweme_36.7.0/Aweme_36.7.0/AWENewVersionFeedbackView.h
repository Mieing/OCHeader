@class UIImageView, UILabel, UIView, UITapGestureRecognizer;

@interface AWENewVersionFeedbackView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *feedbackImageView;
@property (retain, nonatomic) UILabel *feedbackLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL isShowOnRecommendFeedPage;

+ (BOOL)enableShow;
+ (BOOL)isUserSetHided;
+ (Class)aAWEOuterTestSettingsDOUYINLiteAdapterClass;
+ (id)sharedInstance;

- (void)setupWindow;
- (void)didChangedLanguage;
- (void)configureFrame;
- (void)windowClicked:(id)a0;
- (void)windowLongPressed:(id)a0;
- (id)aAWEOuterTestSettingsDOUYINLiteAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupSubviews;
- (void)setupLayout;

@end
