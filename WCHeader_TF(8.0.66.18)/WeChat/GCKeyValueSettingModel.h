@class NSString;

@interface GCKeyValueSettingModel : GCBaseCellModel

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL isNumber;

- (id)value;
- (void)setValue:(id)a0;
- (Class)bindCellClass;
- (void).cxx_destruct;

@end
