@class UIImageView, NSString;
@protocol AWEIMListEditingViewDelegate;

@interface AWEIMListEditingView : UIView <AWEIMListEditingViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id /* block */ lastBindingHandlerBlock;
@property (weak, nonatomic) id<AWEIMListEditingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapListEditingView;
- (void)__updateSelectUI;
- (void)updateEditingStyle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
