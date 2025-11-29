@class NSString, NSDictionary, NSMutableArray, IESECListKitItemDataModel;

@interface CardReportManager : NSObject

@property (retain, nonatomic) NSMutableArray *cardRecords;
@property (retain, nonatomic) IESECListKitItemDataModel *cellModel;
@property (copy, nonatomic) NSDictionary *paramModel;
@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL needRemove;

- (id)initWithCellModel:(id)a0 index:(long long)a1 btm:(id)a2 ecomType:(id)a3;
- (void)addRecordWithVisibility:(BOOL)a0;
- (void).cxx_destruct;

@end
