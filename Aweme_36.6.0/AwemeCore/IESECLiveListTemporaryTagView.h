@class UIImageView, NSString;
@protocol IESECLiveListTemporaryTagViewDelegate;

@interface IESECLiveListTemporaryTagView : UIView

@property (retain, nonatomic) UIImageView *tmpTagImgView;
@property (copy, nonatomic) NSString *imgURL;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<IESECLiveListTemporaryTagViewDelegate> delegate;

- (void)endShow;
- (void)p_loadImageWithURL:(id)a0;
- (void)p_delegateStateChanged:(long long)a0;
- (void)preloadImgURL:(id)a0;
- (void)startShowWithImgURL:(id)a0 duration:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
