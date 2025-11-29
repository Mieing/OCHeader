@class NSAttributedString;

@interface AWEIMFansGroupDisturbContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSAttributedString *titleAttributedString;
@property (copy, nonatomic) NSAttributedString *contentAttributedString;
@property (copy, nonatomic) NSAttributedString *disturbAttributedString;
@property (copy, nonatomic) id /* block */ closeButtonTapAction;
@property (copy, nonatomic) id /* block */ disturbSwitchChangeAction;
@property (nonatomic) BOOL hideTitleIcon;
@property (nonatomic) BOOL isDisturbSwitchOn;

- (void).cxx_destruct;

@end
