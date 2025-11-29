@class UILabel, NSString, UIView;

@interface IESIMInputFormatComponent : AWEIMComponentBase <AWEConversationFormatEnterActions, IESIMInputFormatBusinessInterface, IESIMInputBottomComponentProvider, IESIMInputThemeChangedAction>

@property (retain, nonatomic) UILabel *silverWingHintLabel;
@property (retain, nonatomic) UIView *silverWingHintView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didUpdateFormatRoom:(id)a0;
- (void)componentDidMounted:(id)a0;
- (double)bottomSpace;
- (BOOL)needSilverWingStateMent;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (BOOL)shouldShowBottomComponent;
- (id)bottomComponentView;
- (void).cxx_destruct;

@end
