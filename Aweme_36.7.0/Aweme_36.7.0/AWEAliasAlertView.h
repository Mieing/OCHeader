@class NSString;

@interface AWEAliasAlertView : AWETextEditAlertView

@property (nonatomic) BOOL isQuickEdit;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *enterFrom;

+ (BOOL)isDisplaying;

- (void)showOnView:(id)a0;
- (void)clickConfirmBtn;
- (void)clickCancelBtn;
- (void)trackEventWithActionType:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isQuickEdit:(BOOL)a1 userID:(id)a2 enterFrom:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isQuickEdit:(BOOL)a1 userID:(id)a2;
- (void)updateBaseViewHeightAfterSetSubtitleLabel;
- (void).cxx_destruct;
- (void)setDefaultValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_setupUI;

@end
