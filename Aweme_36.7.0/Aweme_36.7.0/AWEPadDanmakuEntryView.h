@class NSString, UIImageView, UITextField, UIView;
@protocol AWEPadDanmakuEntryDelegate;

@interface AWEPadDanmakuEntryView : UIView <UITextFieldDelegate, AWEPadDanmakuEntryViewProtocol>

@property (retain, nonatomic) UIView *divideLineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImageView *danmakuIconImageView;
@property (retain, nonatomic) UITextField *danmakuInputView;
@property (weak, nonatomic) id<AWEPadDanmakuEntryDelegate> danmakuEntryDelegate;
@property (copy, nonatomic) id /* block */ didUpdateHiddenBlock;

- (void)handleTapDanmakuInputView;
- (void)handleTapDanmkuIcon;
- (void).cxx_destruct;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)setupView;

@end
