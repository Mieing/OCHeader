@class NSString, AWEDislikeWithDrawPanelView;
@protocol AWEDislikeWithDrawPanelDelegate;

@interface AWEDislikeWithDrawPanelViewController : UIViewController <AWEDislikeWithDrawPanelDelegate>

@property (retain, nonatomic) AWEDislikeWithDrawPanelView *panelView;
@property (weak, nonatomic) id<AWEDislikeWithDrawPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
