@class NSString;

@interface AWECommentPanelListSwiftImpl.CommentDislikeLottieView : UIView <AWECommentCellDislikeLottieProtocol> {
    void /* function */ commentID;
    void /* unknown type, empty encoding */ isDislikeLottiePlaying;
    void /* function */ didFinishAnimation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dislikeLottie;
}

@property (nonatomic, copy) NSString *commentID;
@property (nonatomic, copy) id /* block */ didFinishAnimation;

- (void)playOnView:(id)a0;
- (void)updateAlpha:(double)a0;
- (void).cxx_destruct;
- (void)remove;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
