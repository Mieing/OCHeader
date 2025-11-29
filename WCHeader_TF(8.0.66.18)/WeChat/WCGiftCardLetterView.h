@class UIView, NSString, MMWebImageView, WCGiftCardData, MMUIWindow, UIImageView, NSMutableArray, RichTextView, WCCardVideoViewController, UILabel, WCCardImageBrowserViewController;

@interface WCGiftCardLetterView : MMUIView <WCCardImageBrowserDelegate>

@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UILabel *fromUserLabel;
@property (retain, nonatomic) MMWebImageView *giftImageView;
@property (retain, nonatomic) UIImageView *giftImageShadowView;
@property (retain, nonatomic) UIImageView *giftPlayIconView;
@property (retain, nonatomic) RichTextView *wishTextView;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) NSMutableArray *textLineArray;
@property (nonatomic) long long lineCount;
@property (retain, nonatomic) NSString *fullImagePath;
@property (retain, nonatomic) MMUIWindow *fullScreenWindow;
@property (weak, nonatomic) WCCardVideoViewController *videoVC;
@property (weak, nonatomic) WCCardImageBrowserViewController *imageVC;
@property (retain, nonatomic) NSString *resourcePath;
@property (nonatomic) long long downloadState;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) WCGiftCardData *giftCardData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)beiginDownLoad;
- (void)giftButtonDidClick:(id)a0;
- (void)presentImageVC:(id)a0;
- (void).cxx_destruct;

@end
