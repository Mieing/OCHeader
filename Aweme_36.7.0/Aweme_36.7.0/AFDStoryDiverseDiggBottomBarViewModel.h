@class NSString;
@protocol AWEPlayInteractionShareElementViewModelProtocol;

@interface AFDStoryDiverseDiggBottomBarViewModel : AFDStoryDiverseDiggViewModel <AWEPlayInteractionShareActionLifeCycleDelegate>

@property (retain, nonatomic) id<AWEPlayInteractionShareElementViewModelProtocol> shareViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
