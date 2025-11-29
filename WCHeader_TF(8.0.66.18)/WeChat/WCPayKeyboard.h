@class UIColor, NSTimer, UIImageView, UIButton;
@protocol WACustomKeyboardDelegate, UITextInput;

@interface WCPayKeyboard : UIView {
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    UIColor *_btnBackgroundColorNormal;
    UIColor *_btnBackgroundColorHighlighted;
    UIColor *_delBtnBackgroundColorNormal;
    UIColor *_delBtnBackgroundColorHighlighted;
}

@property (nonatomic) NSTimer *timer;
@property (nonatomic) double height;
@property (retain, nonatomic) UIButton *extraButton;
@property (retain) id<UITextInput> textView;
@property (nonatomic) long long type;
@property (nonatomic) BOOL showConfirm;
@property (nonatomic) struct CGSize { double width; double height; } oldSize;
@property (nonatomic) long long maxLength;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (weak, nonatomic) id<WACustomKeyboardDelegate> delegate;

- (id)init;
- (BOOL)enableInputClicksWhenVisible;
- (void)layoutSubviews;
- (void)setType:(long long)a0 showConfirm:(BOOL)a1;
- (void)setup3X4Keyboard:(BOOL)a0;
- (void)setup4X4Keyboard:(BOOL)a0;
- (void)setExtraKey:(id)a0;
- (void)dismissPressed:(id)a0;
- (void)deleteReleased:(id)a0;
- (void)startDelete;
- (void)characterDeleted;
- (void)deletePressed:(id)a0;
- (void)characterPressed:(id)a0;
- (void).cxx_destruct;

@end
