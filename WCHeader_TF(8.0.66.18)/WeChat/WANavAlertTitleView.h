@class UIColor, NSString, UIImageView, UIImage, UILabel, UIButton;
@protocol WANavAlertTitleViewDelegate;

@interface WANavAlertTitleView : UIView

@property (retain, nonatomic) UIImageView *alertIconView;
@property (retain, nonatomic) UILabel *alertLabel;
@property (retain, nonatomic) UIButton *entryBtn;
@property (retain, nonatomic) NSString *waName;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIImage *normalIcon;
@property (retain, nonatomic) UIImage *highlightIcon;
@property (weak, nonatomic) id<WANavAlertTitleViewDelegate> delegate;

- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)updateAlertTitle:(id)a0;
- (void)updateEntryBtnWithWeAppName:(id)a0;
- (BOOL)shouldShowEntry;
- (void)alert;
- (void)beginHighlight;
- (void)endHighlight;
- (void)onEntryBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
