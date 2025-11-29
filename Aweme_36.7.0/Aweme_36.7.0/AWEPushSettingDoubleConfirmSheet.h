@class UILabel, UIButton, UIImageView;

@interface AWEPushSettingDoubleConfirmSheet : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *imgView;
@property (nonatomic) BOOL needShowImg;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

+ (Class)aAWEPadBizUIAdapterClass;
+ (id)confirmSheetWithTitle:(id)a0 decription:(id)a1 cancel:(id)a2 confirm:(id)a3 isNeedImg:(BOOL)a4;
+ (id)confirmSheetWithTitle:(id)a0 decription:(id)a1 cancel:(id)a2 confirm:(id)a3;

- (id)aAWEPadBizUIAdapter;
- (void)close;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cancel;
- (void)confirm;

@end
