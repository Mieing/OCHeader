@class MJTemplateComposingButton, UIButton;

@interface MJPublisherPickerComposingButtonManager : NSObject

@property (retain, nonatomic) MJTemplateComposingButton *springFestivalButtonForPreviewing;
@property (retain, nonatomic) MJTemplateComposingButton *springFestivalButtonForNonPreviewing;
@property (retain, nonatomic) UIButton *normalButtonForPreviewing;
@property (retain, nonatomic) UIButton *normalButtonForNonPreviewing;
@property (nonatomic) BOOL isUsingNewYearStyle;

- (id)init;
- (void)setupButtons;
- (id)makeNormalStyleButton;
- (id)makeSpringFestivalStyleButton;
- (void)updateIsUsingNewYearStyle;
- (void)calcIsUsingNewYearStyle;
- (void)composingButtonEnabledStateDidChange:(BOOL)a0;
- (id)composingButtonForAssetPreviewing:(BOOL)a0;
- (void).cxx_destruct;

@end
