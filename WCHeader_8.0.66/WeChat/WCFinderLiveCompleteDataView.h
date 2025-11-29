@class WCFinderLiveCompleteDataPageView, FinderLiveAnchorCloseLivePageData, WCFinderLiveCompleteDataModel;

@interface WCFinderLiveCompleteDataView : MMUIView

@property (retain, nonatomic) FinderLiveAnchorCloseLivePageData *pageData;
@property (retain, nonatomic) WCFinderLiveCompleteDataModel *dataModel;
@property (retain, nonatomic) WCFinderLiveCompleteDataPageView *basePageView;
@property (retain, nonatomic) WCFinderLiveCompleteDataPageView *incomePageView;
@property (copy, nonatomic) id /* block */ itemSelectBlock;
@property (copy, nonatomic) id /* block */ dataViewBlock;
@property (copy, nonatomic) id /* block */ dataViewExposeBlock;

+ (id)localPageDataWithFinderLiveInfo:(id)a0 finderLiveTask:(id)a1 isBizLive:(BOOL)a2 showType:(unsigned long long)a3;
+ (id)getDataItemListWithType:(int)a0 shouldPaymentEntry:(BOOL)a1 enableLiveRoomReward:(BOOL)a2 shoppingAvailable:(BOOL)a3 isBizLive:(BOOL)a4;
+ (BOOL)shouldPaymentEntryWithFinderLiveInfo:(id)a0;

- (id)getDataViewHeightWithPageData:(id)a0;
- (BOOL)showAudienceAvgSecondsSubTitle:(id)a0;
- (void)updateWithPageData:(id)a0;
- (BOOL)showInComeViewWithPageData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void).cxx_destruct;

@end
