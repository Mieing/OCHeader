@class UIImage, NSString;

@interface WCFinderCommonTipsAlertView : WCFinderCustomPanelSheet

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *tipsTitle;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSString *linkTitle;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (id)initWithIcon:(id)a0 title:(id)a1 descText:(id)a2 actionTitle:(id)a3 linkTitle:(id)a4 linkURL:(id)a5;
- (id)initWithHalfSheetInfo:(id)a0;
- (id)init;
- (id)loadContentView;
- (void)clickLinkAction;
- (void)clickConfirmBlock;
- (void).cxx_destruct;

@end
