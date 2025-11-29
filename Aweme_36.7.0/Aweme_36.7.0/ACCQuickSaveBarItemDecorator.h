@class UIButton, NSString, NSDictionary, UIView, HDRMTButton, UILabel;
@protocol ACCQuickSaveBarItemLoadingViewProtocol;

@interface ACCQuickSaveBarItemDecorator : NSObject

@property (retain, nonatomic) UIView<ACCQuickSaveBarItemLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) NSDictionary *images;
@property (copy, nonatomic) NSDictionary *titles;
@property (retain, nonatomic) HDRMTButton *hdrItemBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *titleLabelText;
@property (nonatomic) BOOL usingProgressStyle;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ statusChangedCallback;
@property (copy, nonatomic) id /* block */ progressChangedCallback;

- (BOOL)hdrEnabled;
- (void)triggerLoading;
- (void)triggerReset;
- (id)buttonControllStateTypes;
- (void)resetAsDefault;
- (id)initWithButton:(id)a0 titleLabel:(id)a1;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)updateStatus:(long long)a0;
- (void)setup;
- (void)updateProgress:(double)a0;

@end
