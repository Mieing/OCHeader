@class NSString;

@interface AWEDPlayerSearchMovieTrascodeViewController : AWEDPlayerInteractionBaseController <AWEDPlayerSearchMovieTrascodeViewControllerProtocol>

@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void).cxx_destruct;

@end
