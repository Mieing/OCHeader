@class MMUIButton;
@protocol MMPickLocationActionDelegate;

@interface MMPickLocationTopView : UIView

@property (weak, nonatomic) id<MMPickLocationActionDelegate> actionDelegate;
@property (retain, nonatomic) MMUIButton *foldedBtn;

+ (double)PickLocationTopViewHeight;

- (id)init;
- (void)layoutSubviews;
- (void)onClickFoldedBtn;
- (void)displayFoldBtn;
- (void)hideFoldBtn;
- (void).cxx_destruct;

@end
