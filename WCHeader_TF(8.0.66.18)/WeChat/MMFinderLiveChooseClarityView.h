@class NSString, CAShapeLayer, MMFinderLiveChooseClarityViewNavBar, MMFinderLiveChooseClarityTableViewModel, UIView, MMTableView;
@protocol MMFinderLiveChooseClarityDelegate;

@interface MMFinderLiveChooseClarityView : MMPageSheetBaseView <MMFinderLiveChooseClarityTableDataDelegate> {
    MMFinderLiveChooseClarityTableViewModel *_clarityMethodTableViewModel;
}

@property (readonly, nonatomic) MMFinderLiveChooseClarityTableViewModel *clarityMethodTableViewModel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar;
@property (retain, nonatomic) MMTableView *clarityMethodTableView;
@property (nonatomic) unsigned long long fromScene;
@property (weak, nonatomic) id<MMFinderLiveChooseClarityDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeModelArray:(id)a0;
+ (id)transferToClarityModelArray:(id)a0 liveTask:(id)a1;
+ (id)getSwitchStreamClarityDataItemModelArray:(id)a0 chooseCdnUrl:(id)a1;
+ (BOOL)isCanUseCdnTransInfoWithModelArray:(id)a0 chooseCdnUrl:(id)a1;
+ (void)tagSelectStateForClarityDataArray:(id)a0 chooseInfo:(id)a1;
+ (id)getSelectedClarityDataItem:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithClarityMethodData:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)updateData:(id)a0 chooseInfo:(id)a1;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentWidth;
- (double)contentViewHeight;
- (double)getClarityTableHeight;
- (void)didSelectRowWithItem:(id)a0 indexPath:(id)a1;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void).cxx_destruct;

@end
