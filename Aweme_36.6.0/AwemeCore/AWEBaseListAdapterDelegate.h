@class NSString;
@protocol AWEBaseListViewControllerDelegate;

@interface AWEBaseListAdapterDelegate : NSObject <IGListAdapterDelegate>

@property (weak, nonatomic) id<AWEBaseListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listAdapter:(id)a0 willDisplayObject:(id)a1 atIndex:(long long)a2;
- (void)listAdapter:(id)a0 didEndDisplayingObject:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;

@end
