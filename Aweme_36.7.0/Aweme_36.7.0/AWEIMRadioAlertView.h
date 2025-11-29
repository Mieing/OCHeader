@class UITextView, NSString, UIImageView, UIImage, UILabel, NSAttributedString, NSArray;

@interface AWEIMRadioAlertView : AWEUIAlertView <IESIMRadioAlertViewProtocol>

@property (nonatomic) BOOL iesim_radioIsSelected;
@property (nonatomic) double customCornerRadius;
@property (nonatomic) BOOL shouldShowIconImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } iconImageEdgeInsets;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) UILabel *attributedLabel;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (nonatomic) BOOL messageShouldAlignLeft;
@property (readonly, nonatomic) UITextView *descriptionTextView;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) id /* block */ handleBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL dismissWhenTappedInBlankArea;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_useRadioStyleDescriptionWithAttributedText:(id)a0;
- (void)__configRadioStyleDescriptionWithAttributedText:(id)a0;
- (void)iesim_useRadioStyleDescriptionWithText:(id)a0;

@end
