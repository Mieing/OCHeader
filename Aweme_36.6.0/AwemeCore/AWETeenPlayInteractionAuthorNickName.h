@class UILabel, NSString, UIView;

@interface AWETeenPlayInteractionAuthorNickName : AWETeenPlayInteractionBaseElement <AWEBaseElementProtocol>

@property (retain, nonatomic) UILabel *authorName;
@property (retain, nonatomic) UIView *midDotView;
@property (retain, nonatomic) UILabel *createTimeLabel;
@property (retain, nonatomic) UIView *richContentIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAuthorNameClicked;
- (void)p_RichContentIconClicked;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
