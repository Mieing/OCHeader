@class ACCRecordViewControllerInputData;

@interface ACCPropDataFilter : NSObject

@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (nonatomic) BOOL filterCommerce;
@property (nonatomic) unsigned long long effectFilterType;

- (id)initWithInputData:(id)a0;
- (BOOL)allowEffect:(id)a0;
- (id)filteredEffects:(id)a0;
- (void).cxx_destruct;

@end
