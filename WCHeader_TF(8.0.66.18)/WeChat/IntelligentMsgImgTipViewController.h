@class NSString, MMUIView, MMUIButton, MMUILabel;
@protocol IntelligentMsgImgTipViewControllerDelegate;

@interface IntelligentMsgImgTipViewController : MMUIHalfScreenViewController <UIViewControllerAnimatedTransitioning> {
    MMUIButton *m_backgroundButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_descContentView;
    MMUIButton *_closeButton;
}

@property (weak, nonatomic) id<IntelligentMsgImgTipViewControllerDelegate> m_delegate;
@property (nonatomic) BOOL m_isDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (id)closeButton;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)onClickClose:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)setCloseButton:(id)a0;
- (void).cxx_destruct;

@end
