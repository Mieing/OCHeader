@class UIFont, NSString, NSArray, BDPAlertControllerTheme, UIView, UILabel, UIImage, UIImageView, NSMutableArray, NSNumber, UIColor;
@protocol BDPAlertViewCustomViewDelegate, BDPAlertViewDelegate;

@interface BDPAlertView : UIView <UITextViewDelegate, BDPAlertViewUpdateUIFromCustomViewDelegate> {
    UIView *_container;
    UIView *_topContainer;
    UIView *_titleContainer;
    UILabel *_titleLabel;
    UIView *_actionContainer;
    NSMutableArray *_actionButtons;
    UILabel *_placeHolder;
    UIImage *_image;
    UIImageView *_topImageView;
}

@property (retain, nonatomic) BDPAlertControllerTheme *theme;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) UIFont *alertTitleFont;
@property (copy, nonatomic) UIColor *alertTitleColor;
@property (copy, nonatomic) NSString *alertContent;
@property (copy, nonatomic) UIFont *alertContentFont;
@property (copy, nonatomic) UIColor *alertContentColor;
@property (copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic) NSNumber *cornerRadius;
@property (retain, nonatomic) UIView<BDPAlertViewCustomViewDelegate> *customBodyView;
@property (copy, nonatomic) NSNumber *customBodyViewHeight;
@property (copy, nonatomic) NSArray *actions;
@property (weak, nonatomic) id<BDPAlertViewDelegate> delegate;
@property (nonatomic) BOOL editable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)topImageViewHeight;
- (id)initWithTitle:(id)a0 content:(id)a1 placeholderText:(id)a2 image:(id)a3 theme:(id)a4 actions:(id)a5 editable:(BOOL)a6;
- (void)setupTopImageView;
- (struct CGSize { double x0; double x1; })stringSize:(id)a0 withMaxWidth:(double)a1 font:(id)a2 lineHeight:(double)a3;
- (void)onButtonTaped:(id)a0;
- (void)updateCustomBodyViewHeight:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)setupUI;

@end
