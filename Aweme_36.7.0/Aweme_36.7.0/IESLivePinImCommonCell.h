@class UIView, NSString, IESLivePinOperateView, IESLivePinCommentCheckTipView, HTSLiveTemplateEngineConfiguration, IESLiveEmojiTextParser, IESLiveImageView, UILabel, IESLivePinCommentNode;
@protocol IESLivePinCommentCellDelegate, HTSLiveTemplateProviderAdapter, IESLiveLanguageService;

@interface IESLivePinImCommonCell : UICollectionViewCell <IESLivePinCommentCellProtocol>

@property (retain, nonatomic) UIView *redLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESLiveImageView *iconImgView;
@property (retain, nonatomic) UIView *operateBaseLine;
@property (retain, nonatomic) IESLivePinCommentCheckTipView *checkTipView;
@property (retain, nonatomic) IESLivePinOperateView *operateView;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiParser;
@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateParser;
@property (retain, nonatomic) HTSLiveTemplateEngineConfiguration *templateConfig;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) IESLivePinCommentNode *node;
@property (weak, nonatomic) id<IESLivePinCommentCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableHostLocalizationsWithLabel:(id)a0;
- (void)showOperateArea:(BOOL)a0;
- (void)configWithNode:(id)a0 containerWidth:(double)a1;
- (void)resetLayoutForImageStyle;
- (void)resetLayoutForTextStyle;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
