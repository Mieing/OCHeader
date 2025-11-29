@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveGiftVoteMachineHybridView : UIView <IESHYHybridViewLifecycleProtocol>

@property (nonatomic) BOOL isLoadSuccess;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) NSString *taskBoxUrl;
@property (nonatomic) double startTime;
@property (nonatomic) double createModelTime;
@property (nonatomic) struct CGSize { double width; double height; } currentHybridViewSize;
@property (copy, nonatomic) id /* block */ urlLoadFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (BOOL)viewShouldAllowLoadWithResponse:(id)a0;
- (void)initHybridContainerWithPreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)bindUrl:(id)a0 withPreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)sendEventWithName:(id)a0 param:(id)a1;
- (struct CGSize { double x0; double x1; })getHybridViewSizeAfterChange;
- (void).cxx_destruct;

@end
