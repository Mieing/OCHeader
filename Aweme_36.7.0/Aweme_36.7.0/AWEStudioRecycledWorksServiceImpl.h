@class NSString, AWERecycledWorksPrivatePostViewModel;

@interface AWEStudioRecycledWorksServiceImpl : NSObject <AWEStudioRecycledWorksService>

@property (nonatomic) BOOL hasShow;
@property (retain, nonatomic) AWERecycledWorksPrivatePostViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)privatePostRecycledWorksCellClass;
- (id)privatePostRecycledWorksViewModel;
- (BOOL)enableShowEntrance;
- (BOOL)hiddenRecycledWorksVCTopGuidance;
- (void)closeRecycledWorksVCTopGuidance;
- (void).cxx_destruct;

@end
