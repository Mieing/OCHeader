@class NSString;
@protocol BDXPagerMainTableViewGestureDelegate;

@interface BDXPagerMainTableView : UITableView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<BDXPagerMainTableViewGestureDelegate> gestureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
