@class IESLLPOIDetailSummaryView, IESLLPOIDetailResponse, IESLLPOIDetailStore, NSString;

@interface IESLLPOIDetailInfoLiveSummaryCellViewModel : IESLLPOIDetailInfoSeparatorViewModel <IESLLPOIDetailSummaryViewDelegate>

@property (retain, nonatomic) IESLLPOIDetailResponse *poiDetail;
@property (retain, nonatomic) IESLLPOIDetailSummaryView *summaryView;
@property (retain, nonatomic) IESLLPOIDetailStore *store;
@property (nonatomic) BOOL shouldNotifyViewReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;
+ (unsigned int)functionsWithScene:(unsigned long long)a0;

- (void)setupViewModel;
- (void)poi_onAppear;
- (void)handleCollect;
- (void)summaryViewDidTapOnCollectButton:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
