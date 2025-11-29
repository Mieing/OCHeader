@class WCPayWebImageView, NSMutableDictionary, WCPayThirdC2CMessageViewModel, NSString, UIView;

@interface WCPayThirdC2CMessageCellView : WCPayBaseMessageCellView <MMWebImageViewDelegate>

@property (readonly, nonatomic) WCPayThirdC2CMessageViewModel *viewModel;
@property (retain, nonatomic) NSMutableDictionary *showResourceMaskImageViewCache;
@property (retain, nonatomic) WCPayWebImageView *showResourceImageView;
@property (retain, nonatomic) UIView *showResourceBgView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStatus;
- (void)initTitleLabel;
- (void)updateBackground;
- (id)generateMaskImage:(id)a0 isSender:(BOOL)a1;
- (void)initThirdC2CSoureViewInside;
- (void)initSourceViewInside;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
