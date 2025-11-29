@class NSString, MMFinderLiveNewAnchorTaskViewModel;

@interface MMFinderLiveNewAnchorTaskTargetsView : MMUIView

@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM;
@property (retain, nonatomic) NSString *reward;
@property (retain, nonatomic) NSString *rewardDetail;
@property (nonatomic) BOOL isMultiStage;

- (void)refreshStatus;
- (struct CGSize { double x0; double x1; })titleSize:(id)a0;
- (void)onButtonClicked;
- (void).cxx_destruct;

@end
