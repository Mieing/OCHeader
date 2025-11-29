@class NSString, UIImageView, NSHashTable, UILabel, UIView, UIButton;

@interface BDARVIndicatorView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) NSString *loadingText;
@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) UIView *indicatorViewGroup;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *retryButton;
@property (nonatomic) unsigned long long currentIndicatorType;
@property (retain, nonatomic) NSString *adID;
@property (retain, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSHashTable *delegates;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL enablePocketWindow;

- (void)sendRequestErrorWithRetryCount:(long long)a0 enablePocketWindow:(BOOL)a1 error:(id)a2;
- (void)showWithType:(unsigned long long)a0 withText:(id)a1;
- (void)stopIndicate;
- (void)adInfoWithADID:(id)a0 logExtra:(id)a1;
- (void)_setupIndicatorViewGroup;
- (void)_stopLoadingAnimation;
- (void)_startLoadingAnimation;
- (void)_changeToRequestErrorTypeWithText:(id)a0;
- (void)_changeToLoadingTypeWithText:(id)a0 type:(unsigned long long)a1;
- (void)_changeToVideoErrorTypeWithText:(id)a0;
- (void)_changeToRetryErrorTypeWithText:(id)a0;
- (void)close;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)retry;

@end
