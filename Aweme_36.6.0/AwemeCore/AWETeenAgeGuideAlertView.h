@class UIView, NSString, AWETeenLoadingButton, AWETeenAgePickerView, NSMutableDictionary, NSDictionary, UIButton, UILabel;

@interface AWETeenAgeGuideAlertView : UIView <AWETeenAgePickerViewDelegate, AWETeenAgeGuideProtocol>

@property (retain, nonatomic) UIView *alertView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *ageTitleContainer;
@property (retain, nonatomic) UILabel *ageTitleLabel;
@property (retain, nonatomic) AWETeenAgePickerView *agePickerView;
@property (retain, nonatomic) NSMutableDictionary *profile;
@property (copy, nonatomic) NSDictionary *profileCollectionParams;
@property (retain, nonatomic) AWETeenLoadingButton *submitButton;
@property (copy, nonatomic) id /* block */ clickSubmitAction;
@property (copy, nonatomic) id /* block */ closeAlertCompletion;
@property (nonatomic) BOOL isFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ageGuideWithGender:(long long)a0 birthday:(id)a1 age:(long long)a2 params:(id)a3;

- (void)submitAction;
- (void)breakpointDidUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gender:(long long)a1 birthday:(id)a2 age:(long long)a3;
- (void)p_updateSubmitStatusWithAnimation:(BOOL)a0;
- (void)agePickerViewDidSelected:(id)a0;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)closeAction;
- (void)show;

@end
