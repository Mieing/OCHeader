@class IESIMContactPickerCellConfig, IESIMContactPickerPageSwitchConfig, IESIMContactPickerViewLayoutConfig, IESIMEmptyPageConfig, IESIMContactPickerSearchConfig, IESIMContactPickerCustomViewConfig, IESIMLoadingViewConfig, IESIMContactPickerNaviBarConfig, IESIMContactPickerPageStructConfig, IESIMLoadMoreFooterConfig, IESIMContactPickerDataSourceConfig, IESIMNetErrorPageConfig, IESIMContactPickerSelectConfig, IESIMContactPickerConfirmConfig;

@interface IESIMContactPickerConfiguration : NSObject

@property (retain, nonatomic) IESIMContactPickerViewLayoutConfig *viewLayoutConfig;
@property (retain, nonatomic) IESIMContactPickerNaviBarConfig *naviBarConfig;
@property (retain, nonatomic) IESIMContactPickerSearchConfig *searchConfig;
@property (retain, nonatomic) IESIMContactPickerConfirmConfig *confirmConfig;
@property (retain, nonatomic) IESIMContactPickerDataSourceConfig *dataSourceConfig;
@property (retain, nonatomic) IESIMContactPickerCellConfig *cellConfig;
@property (retain, nonatomic) IESIMContactPickerSelectConfig *selectConfig;
@property (retain, nonatomic) IESIMEmptyPageConfig *emptyPageConfig;
@property (retain, nonatomic) IESIMNetErrorPageConfig *netErrorPageConfig;
@property (retain, nonatomic) IESIMLoadingViewConfig *loadingViewConfig;
@property (retain, nonatomic) IESIMContactPickerPageSwitchConfig *pageSwitchConfig;
@property (retain, nonatomic) IESIMLoadMoreFooterConfig *loadMoreConfig;
@property (retain, nonatomic) IESIMContactPickerPageStructConfig *pageStructConfig;
@property (retain, nonatomic) IESIMContactPickerCustomViewConfig *customTopConfig;
@property (retain, nonatomic) IESIMContactPickerCustomViewConfig *backgroundViewConfig;

- (id)initWithDataSourceConfig:(id)a0;
- (id)initWithDataSourceConfig:(id)a0 selectConfig:(id)a1;
- (void).cxx_destruct;

@end
