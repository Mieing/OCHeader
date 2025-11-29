@class UILabel, FavActivityIndicatorView, UIButton;
@protocol WNTranslateTopViewDelegate;

@interface WNTranslateTopView : UIView {
    UILabel *m_contentLabel;
    FavActivityIndicatorView *m_loadingView;
    UIButton *m_closeBtn;
    UIButton *m_changeLanguageBtn;
}

@property (weak, nonatomic) id<WNTranslateTopViewDelegate> delegate;

- (void)beginTranslate;
- (void)didTranslateComplete;
- (void)changeWidthTo:(double)a0;
- (void)onClose:(id)a0;
- (void)onChangeLanguage:(id)a0;
- (void).cxx_destruct;

@end
