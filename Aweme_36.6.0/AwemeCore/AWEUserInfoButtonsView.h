@class UIButton, UIColor, NSString;
@protocol AWEProfileHeaderActionControllerProtocol;

@interface AWEUserInfoButtonsView : UIView <AWEUserInfoButtonsViewProtocol>

@property (retain, nonatomic) UIButton *genderAndAgeButton;
@property (retain, nonatomic) UIButton *schoolButton;
@property (retain, nonatomic) UIButton *locationButton;
@property (retain, nonatomic) id<AWEProfileHeaderActionControllerProtocol> actionController;
@property (nonatomic) BOOL isConstColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *genderIconColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_infoButtonFont;
+ (double)heightWithUser:(id)a0;

- (id)p_textColor;
- (void)p_setGenderAndAgeContent;
- (void)p_setupInfoButton:(id)a0;
- (BOOL)showInfoButtons:(id)a0 maxWidth:(double)a1;
- (id)p_backgroundColor;
- (void).cxx_destruct;
- (id)init;

@end
