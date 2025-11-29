@class UIView, NSString, DUXAbandonedButton, AWESearchFilterBaseManager, UIButton, AWESearchPOIHotelMultipleSelectionFilterOptionView, NSMutableArray, AWEDoubleColumnSearchMerchandiseFilterComponentModel, UIScrollView;
@protocol AWESearchPOIHotelMultipleSelectionFilterViewDelegate;

@interface AWESearchPOIHotelMultipleSelectionFilterView : UIView <UIScrollViewDelegate, AWESearchPOIFilterViewProtocol>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (retain, nonatomic) AWESearchFilterBaseManager *manager;
@property (retain, nonatomic) UIView *optionViewContainerView;
@property (retain, nonatomic) UIScrollView *optionViewScrollView;
@property (retain, nonatomic) AWESearchPOIHotelMultipleSelectionFilterOptionView *lastOptionView;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) DUXAbandonedButton *confirmButton;
@property (retain, nonatomic) NSMutableArray *optionViews;
@property (weak, nonatomic) id<AWESearchPOIHotelMultipleSelectionFilterViewDelegate> delegate;
@property (nonatomic) long long resetID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isNormalSearch;
@property (readonly, nonatomic) BOOL isSpeedSelect;

- (void)setupBottomView;
- (void)filterBlankViewTouch;
- (void)setupOptionViews;
- (double)bottomViewHeight;
- (void)optionViewShowTrack;
- (void)resetButtonClickAction;
- (void)confirmButtonClickAction;
- (void)endRequestWithEmptyFlag:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1 manager:(id)a2;
- (id)createFilterOptionViewWithModel:(id)a0 parentView:(id)a1;
- (BOOL)canHandleOperation;
- (void)didTapComponentWithModel:(id)a0 index:(long long)a1;
- (void)didShowComponentWithModel:(id)a0 index:(long long)a1;
- (void)optionViewShowTrackWithOptionView:(id)a0 index:(long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)show;
- (void)setupUI;
- (void)beginRequest;

@end
