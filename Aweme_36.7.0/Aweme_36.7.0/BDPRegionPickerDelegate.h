@class NSArray, NSDictionary, NSString, UIPickerView, BDPRegionPickerPluginModel;

@interface BDPRegionPickerDelegate : NSObject <UIPickerViewDelegate, UIPickerViewDataSource>

@property (retain, nonatomic) BDPRegionPickerPluginModel *model;
@property (nonatomic) long long numberOfComponent;
@property (nonatomic) long long selectedProvinceIndex;
@property (nonatomic) long long selectedCityIndex;
@property (nonatomic) long long selectedCountyIndex;
@property (copy, nonatomic) NSArray *regionArray;
@property (copy, nonatomic) NSArray *currentCityArray;
@property (copy, nonatomic) NSArray *currentCountyArray;
@property (copy, nonatomic) NSDictionary *cityHeaderDic;
@property (copy, nonatomic) NSDictionary *countyHeaderDic;
@property (copy, nonatomic) NSDictionary *headerDic;
@property (weak, nonatomic) UIPickerView *pickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfComponentsForLevel:(id)a0;
- (void)setupPickerData;
- (void)setupCurrentComponent;
- (id)currentItemForComponent:(unsigned long long)a0;
- (long long)indexOfRegionName:(id)a0 atRegionEntities:(id)a1;
- (void)checkAndReloadComponent:(long long)a0 pickerView:(id)a1;
- (void)selectCurrent;
- (id)cityEntitiesForProvinceIndex:(long long)a0 withHeader:(BOOL)a1;
- (id)countyEntitiesForProvinceIndex:(long long)a0 cityIndex:(long long)a1 withHeader:(BOOL)a2;
- (id)headerForComponent:(unsigned long long)a0;
- (id)initWithModel:(id)a0 pickerView:(id)a1;
- (id)currentAddress;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;

@end
