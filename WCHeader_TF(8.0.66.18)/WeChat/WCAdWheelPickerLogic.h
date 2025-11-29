@class NSMutableDictionary, NSString, WCAdPickerDataInfo, MMCommonActionSheetPicker;
@protocol WCAdWheelPickerLogicDelegate;

@interface WCAdWheelPickerLogic : WCAdvertiseOperationLogicBase <MMCommonActionSheetPickerDelegate>

@property (retain, nonatomic) MMCommonActionSheetPicker *wheelPicker;
@property (retain, nonatomic) WCAdPickerDataInfo *pickerDataInfo;
@property (nonatomic) unsigned int columnCount;
@property (retain, nonatomic) NSMutableDictionary *transferTableDic;
@property (weak, nonatomic) id<WCAdWheelPickerLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataInfo:(id)a0;
- (void)showPickerInView:(id)a0;
- (void)commonPickerCancel:(id)a0;
- (void)commonPickerConfirm:(id)a0;
- (void)commonActionSheetPicker:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2 pickItem:(id)a3;
- (id)generateInitPickerData;
- (void)setComponentData:(long long)a0 dataList:(id)a1 useDefault:(BOOL)a2;
- (long long)findSelectedIndex:(id)a0 selectedKey:(id)a1;
- (id)generateComponentPickerData:(id)a0;
- (void)makeTransferTable;
- (void).cxx_destruct;

@end
