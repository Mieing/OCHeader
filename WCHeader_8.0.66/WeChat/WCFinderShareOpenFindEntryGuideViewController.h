@class UIButton, UIImageView, UILabel, WCFinderShareOpenFindEntryGuideParams;

@interface WCFinderShareOpenFindEntryGuideViewController : WCFinderCustomPanelSheet

@property (retain, nonatomic) WCFinderShareOpenFindEntryGuideParams *params;
@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) UIImageView *centerImageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *denyButton;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ secondaryAction;

- (id)initWithParams:(id)a0;
- (id)loadContentView;
- (void)reloadLayout;
- (long long)closeButtonStyle;
- (void).cxx_destruct;

@end
