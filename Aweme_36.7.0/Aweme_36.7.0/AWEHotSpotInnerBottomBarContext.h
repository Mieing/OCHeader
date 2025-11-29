@class NSString, AWEHotSpotFeedViewModel;
@protocol AWEHotSearchInnerBottomViewDelegate;

@interface AWEHotSpotInnerBottomBarContext : NSObject <AWEHotSpotInnerBottomBarContextProtocol>

@property (nonatomic) unsigned long long entryWordType;
@property (nonatomic) BOOL isInLiveLandScapeForIOS16;
@property (weak, nonatomic) id<AWEHotSearchInnerBottomViewDelegate> hotSearchTableViewController;
@property (weak, nonatomic) AWEHotSpotFeedViewModel *viewModel;
@property (nonatomic) BOOL shouldShowCommentBar;
@property (copy, nonatomic) id /* block */ getInteractionControllerBlock;
@property (copy, nonatomic) id /* block */ getInteractionContextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
