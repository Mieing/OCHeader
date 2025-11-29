@class NSString, UIImageView, UILabel, UIButton;
@protocol AWESearchAIGCExaminationSummaryEntryViewDelegate;

@interface AWESearchAIGCExaminationSummaryEntryView : UIView

@property (weak, nonatomic) id<AWESearchAIGCExaminationSummaryEntryViewDelegate> delegate;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *guideText;
@property (nonatomic) long long guideStyleExpandTime;
@property (nonatomic) long long guideStyleTimeInterval;
@property (nonatomic) BOOL isExaminationIntent;
@property (copy, nonatomic) id /* block */ aigcExaminationEntryViewClickBlock;
@property (copy, nonatomic) id /* block */ aigcExaminationEntryViewCloseButtonClickBlock;

- (void)awe_themeDidChange:(long long)a0;
- (void)closeButtonClick;
- (void)aigcExaminationEntryViewClick;
- (id)gradientImageWithColors:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setImageWithThemeStyle:(long long)a0;
- (BOOL)shouldShowGuideStyle;
- (id)fullKeyWithKeyword:(id)a0;
- (id)initWithExaminationSummaryEntryViewDelegate:(id)a0;
- (void)updateWithConfig:(id)a0 isReentering:(BOOL)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (void)updateStyle:(unsigned long long)a0;
- (void)createUI;

@end
