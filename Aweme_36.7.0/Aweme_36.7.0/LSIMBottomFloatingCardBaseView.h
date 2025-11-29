@class UIStackView, UIImageView, UILabel, UIButton;

@interface LSIMBottomFloatingCardBaseView : LSIMBottomFloatingCardView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *subtitleStackView;
@property (retain, nonatomic) UIButton *sendButton;

- (id)jumpURL;
- (id)cardTypeString;
- (id)subtitleConfig;
- (id)sendParams;
- (id)initWithType:(long long)a0 cardDict:(id)a1 cardNetDict:(id)a2;
- (void)cardViewTapped;
- (id)sendButtonString;
- (id)defaultLabelWithData:(id)a0;
- (void)setupSubtitleLabel:(id)a0 text:(id)a1;
- (id)sendBizExt;
- (void)setupsubtitleDescLabel:(id)a0 descText:(id)a1 detailLabel:(id)a2 detailText:(id)a3;
- (id)attributeString:(id)a0 font:(id)a1 textColor:(id)a2 extraAttributes:(id)a3;
- (void)sendButtonTapped;
- (void).cxx_destruct;
- (id)imageURL;
- (id)itemID;
- (void)setupView;
- (id)titleString;
- (void)setupStackView;
- (id)subLabel;
- (void)closeButtonTapped;
- (void)setupContent;

@end
