@class NSArray;

@interface IESIMContactPickerDataSourceConfig : NSObject

@property (copy, nonatomic) NSArray *dataConfigs;
@property (copy, nonatomic) id /* block */ didLoadDataBlock;

- (void).cxx_destruct;

@end
