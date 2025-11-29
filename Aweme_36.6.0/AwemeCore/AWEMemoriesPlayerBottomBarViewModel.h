@class NSString, AWEMemoriesPlayerContext;
@protocol AWEMemoriesPlayerBottomBarViewModelDelegate;

@interface AWEMemoriesPlayerBottomBarViewModel : NSObject <AWEMemoriesPlayerBottomBarService>

@property (weak, nonatomic) id<AWEMemoriesPlayerBottomBarViewModelDelegate> delegate;
@property (weak, nonatomic) AWEMemoriesPlayerContext *playerContext;
@property (copy, nonatomic) NSString *hintText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)bottomBarHeight;

@end
