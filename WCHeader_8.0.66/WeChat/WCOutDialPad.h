@class UIButton, UIView;
@protocol WCOutDialPadDelegate;

@interface WCOutDialPad : MMUIView {
    unsigned long long m_mode;
    UIView *m_keyPadBtnsView;
    UIView *m_SKMBtnsView;
    UIButton *m_hideBtn;
    UIButton *m_bottomFunctionBtn;
}

@property (weak, nonatomic) id<WCOutDialPadDelegate> delegate;
@property (nonatomic) BOOL hideKeyPad;
@property (nonatomic) BOOL enableBottomFunctionBtn;
@property (readonly, nonatomic) BOOL isMuteBtnSelected;
@property (readonly, nonatomic) BOOL isSpeakerBtnSelected;

- (id)initWithPadMode:(unsigned long long)a0;
- (void)configDialViewMode;
- (void)configCallingViewMode;
- (void)configKeyPadBtnViewWithColorMode:(unsigned long long)a0;
- (void)configBottomFunctionBtnAndHideBtnWithMode:(unsigned long long)a0;
- (void)configSKMBtnsView;
- (void)layoutSubviews;
- (void)didTagButton:(id)a0;
- (void)updateDailViewMode;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
