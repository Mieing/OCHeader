@class UIView;

@interface IESLiveAnnouncementNavBarAction : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewSize;

- (void)addGesture;
- (void)viewDidTapped:(id)a0;
- (id)initWithView:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
