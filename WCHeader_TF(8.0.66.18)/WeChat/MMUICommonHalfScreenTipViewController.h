@class UIButton, MMUIView, MMCommonHalfScreenTipViewConfigParam, MMUIButton, MMUILabel;
@protocol MMUICommonHalfScreenTipViewControllerDelegate;

@interface MMUICommonHalfScreenTipViewController : MMUIHalfScreenViewController {
    MMUIButton *m_backgroundButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_descContentView;
    UIButton *m_operateButton;
    UIButton *m_cancelButton;
    MMUIView *m_descContentSegmenView;
    MMCommonHalfScreenTipViewConfigParam *m_viewConfigParam;
    MMUIButton *_closeButton;
}

@property (weak, nonatomic) id<MMUICommonHalfScreenTipViewControllerDelegate> m_delegate;
@property (nonatomic) BOOL m_isDarkMode;
@property (nonatomic) unsigned int m_viewConfigFlag;

- (id)initWithViewConfigParam:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)getViewConfigParam;
- (void)initData;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;
- (id)closeButton;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)layoutDescContentSegmenView;
- (void)layoutOperateButton;
- (void)layoutCancelButton;
- (void)appendDescContentSegmenView:(id)a0 contentSegmenView:(id)a1 isLastSegmen:(BOOL)a2;
- (double)getTitleViewTop;
- (double)getDescContentViewTop;
- (double)getDescContentViewBottom;
- (double)getOperateButtonBottom;
- (double)getCommonHalfScreenTipViewHeight;
- (void)onClickClose:(id)a0;
- (void)onClickOperateButton:(id)a0;
- (void)onClickCancelButtonButton:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)setCloseButton:(id)a0;
- (void).cxx_destruct;

@end
