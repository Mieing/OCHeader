@class NSString, UIImageView, NSArray, UILabel, NSMutableArray, UIView;

@interface BDPPhoneNumberPermissionContentView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSMutableArray *phoneNumDisplayViews;
@property (copy, nonatomic) NSString *tagLabelText;
@property (nonatomic) BOOL usePhoneNumberList;
@property (retain, nonatomic) UILabel *singlePhoneNumLabel;
@property (retain, nonatomic) UIImageView *singlePhoneNumChosenIcon;
@property (nonatomic) long long lastSelectedNumber;
@property (copy, nonatomic) NSString *subTitleText;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) UIImageView *phoneIconView;
@property (copy, nonatomic) id /* block */ phoneNumChooseBlock;

- (void)setupContainer;
- (double)mainContainerHeight;
- (void)onTapPhoneNumberViewWithGesture:(id)a0;
- (void)setupSinglePhoneNumberView;
- (void)setupPhoneNumberDisplayViews;
- (id)initWithTagText:(id)a0 usePhoneNumberList:(BOOL)a1 subTitleText:(id)a2;
- (void).cxx_destruct;
- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setupTitleLabel;
- (void)setupSubtitleLabel;

@end
