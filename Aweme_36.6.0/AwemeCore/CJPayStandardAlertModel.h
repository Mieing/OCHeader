@class NSString, UIImage, UIView, NSAttributedString;

@interface CJPayStandardAlertModel : NSObject

@property (copy, nonatomic) NSString *topRightButtonTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributeTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSAttributedString *attributeSubTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSAttributedString *attributeMessage;
@property (copy, nonatomic) NSString *featureTitle;
@property (copy, nonatomic) NSString *sureButtonTitle;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *titleActionIconUrl;
@property (retain, nonatomic) UIImage *titleActionIcon;
@property (copy, nonatomic) NSString *titleIconUrl;
@property (retain, nonatomic) UIImage *titleIcon;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) BOOL isShowInput;
@property (nonatomic) BOOL isShowClose;
@property (nonatomic) BOOL isClickedDisappear;
@property (nonatomic) BOOL isClickedBackgroundDisappear;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *errorTextString;
@property (nonatomic) unsigned long long buttonListStyle;
@property (nonatomic) unsigned long long positiveAlignment;
@property (copy, nonatomic) id /* block */ didClickOperationBlock;
@property (copy, nonatomic) id /* block */ didInputTextChangeBlock;
@property (copy, nonatomic) id /* block */ didClickCloseButtonBlock;
@property (copy, nonatomic) id /* block */ didClickTitleActionBlock;
@property (copy, nonatomic) id /* block */ didClickTopRightActionBlock;

- (void).cxx_destruct;
- (id)init;

@end
