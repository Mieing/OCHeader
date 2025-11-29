@class UIImageView, UILabel, UIView, UIButton;

@interface IESLiveInteractiveGiftAudienceAbleTopView : UIView

@property (retain, nonatomic) UILabel *mainText;
@property (retain, nonatomic) UILabel *hintText;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIButton *pinButton;
@property (retain, nonatomic) UIImageView *backButtonImg;
@property (retain, nonatomic) UIView *yelloDotView;
@property (copy, nonatomic) id /* block */ backAction;
@property (copy, nonatomic) id /* block */ addAction;
@property (copy, nonatomic) id /* block */ pinAction;

- (void)didSetAttachingDIContext;
- (void)backButtonClicked;
- (void)pinButtonClicked;
- (void)updateCountWith:(long long)a0;
- (void)changeButtonImgWithName:(id)a0;
- (void).cxx_destruct;
- (void)setUpView;
- (void)addButtonClicked;

@end
