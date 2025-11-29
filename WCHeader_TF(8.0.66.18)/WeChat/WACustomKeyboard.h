@class UIPageControl, NSString, NSTimer, UIImageView, UIScrollView, UIColor, UIButton;
@protocol WACustomKeyboardDelegate, UITextInput;

@interface WACustomKeyboard : UIView <UIScrollViewDelegate, UIInputViewAudioFeedback> {
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    UIColor *_btnBackgroundColorNormal;
    UIColor *_btnBackgroundColorHighlighted;
    UIColor *_delBtnBackgroundColorNormal;
    UIColor *_delBtnBackgroundColorHighlighted;
    UIColor *_btnBorderColor;
}

@property (nonatomic) NSTimer *timer;
@property (nonatomic) double height;
@property (retain, nonatomic) UIButton *extraButton;
@property (weak, nonatomic) id<UITextInput> textView;
@property (nonatomic) long long type;
@property (nonatomic) BOOL showConfirm;
@property (nonatomic) long long maxLength;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (weak, nonatomic) id<WACustomKeyboardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL enableInputClicksWhenVisible;

- (id)init;
- (void)didRotate;
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
- (double)getHeight;
- (void)scrollViewDidScroll:(id)a0;
- (void)changePage:(id)a0;
- (void).cxx_destruct;

@end
