@class UIButton, ActionBase, MMWebImageView;
@protocol ProductMediaItemViewDelegate;

@interface ProductMediaItemView : MMUIView {
    id<ProductMediaItemViewDelegate> _delegate;
    ActionBase *_actionBase;
    MMWebImageView *_imageView;
    UIButton *_playBtn;
    unsigned long long _actionListCount;
}

- (id)initWithDelegate:(id)a0 actionBase:(id)a1 actionListCount:(unsigned long long)a2;
- (void)layoutSubviews;
- (void)onMediaPlayBtnClicked;
- (void).cxx_destruct;

@end
