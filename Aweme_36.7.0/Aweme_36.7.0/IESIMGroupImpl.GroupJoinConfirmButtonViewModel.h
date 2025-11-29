@class UIColor, NSString, UIImage;

@interface IESIMGroupImpl.GroupJoinConfirmButtonViewModel : NSObject {
    void /* unknown type, empty encoding */ buttonStyle;
    void /* function */ buttonTitle;
    void /* unknown type, empty encoding */ kSpacingBetweenConfirmBtnImageAndConfirmBtnTitle;
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } imageEdgeInsets;
@property (nonatomic) BOOL isButtonEnabled;
@property (nonatomic) BOOL isButtonDisabledBecauseQuestion;

- (void)switchStyleWithStyle:(unsigned long long)a0 confirmBtnTitle:(id)a1 isConfirmBtnEnabled:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
