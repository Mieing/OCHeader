@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, NSString, NSDictionary, AWESearchPOICitySelectionFilterCardModel;

@interface AWESearchPOICitySelectionManager : NSObject

@property (copy, nonatomic) NSString *strUserSelectedCityName;
@property (copy, nonatomic) NSString *strCitySelectionJSONInfo;
@property (copy, nonatomic) NSDictionary *dictCityEditExtraInfo;
@property (copy, nonatomic) NSString *strDisposableCitySelectionJSONInfo;
@property (copy, nonatomic) NSDictionary *dictDisposableCityEditExtraInfo;
@property (retain, nonatomic) AWESearchPOICitySelectionFilterCardModel *lastCitySelectionFilterCardModel;
@property (copy, nonatomic) NSString *strCityChangeToastText;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *citySelectFilterComponentModel;

- (id)generateSortParams;
- (id)generateDisposableSortParams;
- (id)generateSortParamsWithCitySelectionJSONInfo:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (void)clean;

@end
