@class UILabel, UIButton, AWEUILoadingView;
@protocol AWECoverEditorTextReloadViewDelegate;

@interface AWECoverEditorTextReloadView : UIView

@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *reloadBtn;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) id<AWECoverEditorTextReloadViewDelegate> delegate;

- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
