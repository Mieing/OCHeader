@class UIView, NSString, UIImage, UITapGestureRecognizer, TakeOrSelectHeadImageLogic, UIImageView, MMUILabel, KidsWatchTextFieldItem;
@protocol KidsWatchRegisterFormCardViewDelegate;

@interface KidsWatchRegisterFormCardView : UIView <TakeOrSelectHeadImageLogicDelegate, KidsWatchResponsiveView>

@property (retain, nonatomic) UIImage *headImage;
@property (retain, nonatomic) TakeOrSelectHeadImageLogic *headImageLogic;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) KidsWatchTextFieldItem *nickNameTextFieldItem;
@property (retain, nonatomic) UIView *nickNameSeparateView;
@property (retain, nonatomic) KidsWatchTextFieldItem *phoneNumberTextFieldItem;
@property (retain, nonatomic) UIView *phoneNumberSeparateView;
@property (weak, nonatomic) id<KidsWatchRegisterFormCardViewDelegate> delegate;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *ISOCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initGestures;
- (id)defaultHeadImagePlaceHolder;
- (id)nickName;
- (id)rawPhoneNumber;
- (void)makePhoneNumberFirstResponder;
- (void)onTapHeadImageView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)callInfoChangeDelegate;
- (void)makeFirstResponder;
- (void)onGetHeadImage:(id)a0;
- (void).cxx_destruct;

@end
