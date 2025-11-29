@class UIButton, UILabel, AWESearchSynthesisNovelBookSettingConfig;
@protocol AWESearchSynthesisNovelProgressViewDelegate;

@interface AWESearchSynthesisNovelProgressView : UIView

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchSynthesisNovelBookSettingConfig *configData;
@property (weak, nonatomic) id<AWESearchSynthesisNovelProgressViewDelegate> delegate;
@property (nonatomic) long long curChapterId;

- (void)updateWithConfigData:(id)a0;
- (void)onLastChapterButtonClick:(id)a0;
- (void)onNextChapterButtonClick:(id)a0;
- (void)updateTitle:(id)a0 withChapterId:(long long)a1;
- (void)onBookInsertedViewBackgroundConfigChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
