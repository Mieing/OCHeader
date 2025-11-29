@class NSString, UIView;
@protocol AWEGrouponHalfScreenDismissAnimationProvider;

@interface AWEGrouponHalfScreenDismissAnimationController : NSObject <CAAnimationDelegate>

@property (retain, nonatomic) UIView *currentAnimationContent;
@property (weak, nonatomic) id<AWEGrouponHalfScreenDismissAnimationProvider> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dismiss:(unsigned long long)a0 withAttachAnimation:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
