@class UILabel, UIButton;

@interface IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ openPaidLinkBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

+ (float)heightForGuidenceHeader;
+ (id)header;

- (void)setUI;
- (void)didTapCloseBlock;
- (void)didTapAcceptButton;
- (void).cxx_destruct;

@end
