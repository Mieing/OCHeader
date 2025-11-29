@class MMUIImageView, NSString, WCCardChooseSubPeopleLabelView, MMUIButton;

@interface WCCardChoosePeopleLabelView : MMUIView

@property (retain, nonatomic) MMUIImageView *peopleImageView;
@property (retain, nonatomic) WCCardChooseSubPeopleLabelView *subPeopleView;
@property (retain, nonatomic) NSString *mainWording;
@property (retain, nonatomic) NSString *mainText;
@property (retain, nonatomic) NSString *subText;
@property (retain, nonatomic) MMUIButton *settingButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
