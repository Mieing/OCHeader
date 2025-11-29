@class WCAddressStageDataStruct;

@interface POIAddressDataPickerItem : MMCommonPickerItem

@property (retain, nonatomic) WCAddressStageDataStruct *addressData;

- (id)initWithAddressData:(id)a0;
- (id)displayStr;
- (void).cxx_destruct;

@end
