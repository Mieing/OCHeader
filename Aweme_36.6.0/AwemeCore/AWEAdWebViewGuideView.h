@class UILabel, AWEButton, AWEAwemeModel;
@protocol AWEAdWebViewGuideDelegate;

@interface AWEAdWebViewGuideView : UIView

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWEButton *openButton;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEAdWebViewGuideDelegate> delegate;

- (void)closeBtnClicked:(id)a0;
- (void)openBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)_setupUI;

@end
