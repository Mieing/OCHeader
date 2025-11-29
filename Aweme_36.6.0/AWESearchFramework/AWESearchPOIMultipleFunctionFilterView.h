@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, AWESearchFilterMultipleColView, NSString;

@interface AWESearchPOIMultipleFunctionFilterView : UIView <AWESearchPOIFilterViewProtocol>

@property (retain, nonatomic) AWESearchFilterMultipleColView *filterMultipleColView;
@property (readonly, nonatomic) BOOL isNormalSearch;
@property (readonly, nonatomic) BOOL isSpeedSelect;
@property (readonly, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
