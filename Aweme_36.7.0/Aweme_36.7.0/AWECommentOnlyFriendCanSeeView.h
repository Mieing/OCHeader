@class NSString, NSDictionary, UILabel, AWECommentOnlyFriendCanSeeModel;

@interface AWECommentOnlyFriendCanSeeView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) AWECommentOnlyFriendCanSeeModel *settingsModel;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL shouldNotShowGuideAgain;
@property (copy, nonatomic) id /* block */ tapLink;

- (void)onUIThemeChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBGWhiteColor:(BOOL)a1 logData:(id)a2;
- (void)__addObserver;
- (void)__setupUI;
- (void)__setupLogData;
- (void)__updateUIForStatusChange;
- (void)__trakeSubtitleLabelShowIfNeeded;
- (void)tapSubtitleLabel;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)dealloc;

@end
