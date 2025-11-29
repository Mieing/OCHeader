@class UICollectionViewLayout, NSString, UICollectionView, WCAddressPickerHeadView, WCAddressStageDataStruct, NSMutableArray, WCAddressPickerBtnGroupView;
@protocol WCAddressHalfScreenDelegate;

@interface WCAddressHalfScreenPickerView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, WCAddressTableViewDelegate, WCAddressHeadViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    id<WCAddressHalfScreenDelegate> m_delegate;
    double m_originPickerY;
    unsigned long long m_numOfCollectionCell;
    NSMutableArray *m_arrStage;
    WCAddressStageDataStruct *m_selectProvince;
    WCAddressStageDataStruct *m_selectCity;
    WCAddressStageDataStruct *m_selectDistrict;
    WCAddressStageDataStruct *m_selectStreet;
    double _layoutOffsetY;
    unsigned long long m_currComponent;
    int m_appearComponent;
    int m_maxStageComponent;
}

@property (retain, nonatomic) WCAddressPickerHeadView *headView;
@property (retain, nonatomic) WCAddressPickerBtnGroupView *btnGroupView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuthorizationStatus:(BOOL)a0;
- (void)initView:(BOOL)a0;
- (void)initData;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)setComponentWhenAppear:(int)a0;
- (void)setMaxStageComponent:(int)a0;
- (void)setStagesInfo:(id)a0;
- (void)setScreenViewDelegate:(id)a0;
- (id)componentAtIndex:(unsigned long long)a0;
- (id)displayCell;
- (id)selectedProvince;
- (id)selectedCity;
- (id)selectedDistrict;
- (id)selectedStreet;
- (id)defaultStreetData;
- (void)setSelectStageProvince:(id)a0 City:(id)a1 District:(id)a2 Street:(id)a3;
- (void)setSelectStageProvince:(id)a0 City:(id)a1 District:(id)a2 Street:(id)a3 Notify:(BOOL)a4;
- (BOOL)setSelectStageWithNationalCode:(id)a0;
- (void)setSelectorMode:(unsigned long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)moveToStage:(unsigned long long)a0 withAnimated:(BOOL)a1;
- (void)chooseAddressAtComponent:(unsigned long long)a0 withStageData:(id)a1;
- (void)chooseProvinceStageWithNonCity:(id)a0;
- (void)onClickTipCellLink:(id)a0;
- (void)layoutBtnGroupViewsAtComponent:(unsigned long long)a0;
- (BOOL)isNonDistrictCity:(id)a0;
- (void)setAddressWithProvince:(id)a0 andCity:(id)a1 andDistrict:(id)a2 andStreet:(id)a3 andDetail:(id)a4;
- (void)layoutSubviewsWhenHeaderChange:(double)a0;
- (void)moveTopBarWithContentOffset:(double)a0;
- (void)updateTopBarLayout:(double)a0;
- (void).cxx_destruct;

@end
