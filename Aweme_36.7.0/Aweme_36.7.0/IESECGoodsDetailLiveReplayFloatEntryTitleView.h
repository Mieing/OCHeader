@class UIStackView, IESECImageModel, IESECTextElement, IESECUIImageView, UIFont, UIColor, IESECGoodsDetailLiveReplayFloatEntryDataModel, NSString, UILabel, IESECGoodsDetailLiveReplayFloatEntryViewModel;

@interface IESECGoodsDetailLiveReplayFloatEntryTitleView : UIView

@property (nonatomic) BOOL hiddenIcon;
@property (retain, nonatomic) IESECGoodsDetailLiveReplayFloatEntryDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailLiveReplayFloatEntryViewModel *viewModel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) IESECUIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) IESECUIImageView *arrowIconImageView;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) double animationTime;
@property (nonatomic) BOOL normalStateEnable;
@property (nonatomic) BOOL livingStateEnable;
@property (nonatomic) BOOL replayStateEnable;
@property (retain, nonatomic) IESECImageModel *iconImageModel;
@property (retain, nonatomic) IESECTextElement *textElement;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *text;

- (BOOL)disableReplayState;
- (void)configWithVideoModel:(id)a0;
- (void)setViewState:(unsigned long long)a0 WithAnimateDurition:(double)a1;
- (void)updateHiddenIcon;
- (void)updateIconImageModel;
- (void)updateTextElement;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateText;
- (void)setupUI;
- (void)updateFont;
- (void)updateTextColor;

@end
