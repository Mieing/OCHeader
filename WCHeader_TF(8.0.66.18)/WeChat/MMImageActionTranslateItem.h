@class WCImageTranslateLogic, NSString, UIScrollView, UIView;

@interface MMImageActionTranslateItem : MMImageActionSheetItem <WCTranslateImgViewControllerDelegate>

@property (retain, nonatomic) id translateItem;
@property (retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic;
@property (weak, nonatomic) UIScrollView *animationScrollView;
@property (weak, nonatomic) UIView *disableInteractWhenTranslateAnimatingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isHidden;
- (void)onImageActionSheetDidAppear;
- (void)handleWithImage;
- (void)showTranslateImage;
- (void)cancelTranslating;
- (void)onReTranslateImage;
- (id)getOriginImage;
- (void).cxx_destruct;

@end
