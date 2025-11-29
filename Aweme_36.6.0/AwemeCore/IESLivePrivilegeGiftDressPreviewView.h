@class UIView;
@protocol IESLiveGiftTrayOuterViewProtocol;

@interface IESLivePrivilegeGiftDressPreviewView : IESLivePrivilegeDressPreviewBaseView

@property (retain, nonatomic) UIView<IESLiveGiftTrayOuterViewProtocol> *previewView;

- (id)initWithPreviewModel:(id)a0 DIContext:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
