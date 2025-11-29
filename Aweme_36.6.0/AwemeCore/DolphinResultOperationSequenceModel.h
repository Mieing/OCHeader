@class NSIndexSet, NSArray, NSDictionary;

@interface DolphinResultOperationSequenceModel : NSObject

@property (retain, nonatomic) NSIndexSet *rerankDeleteIndexes;
@property (retain, nonatomic) NSIndexSet *rerankInsertIndexes;
@property (copy, nonatomic) NSArray *rerankInsertModels;
@property (copy, nonatomic) NSDictionary *dataSourceOptsDict;

- (void).cxx_destruct;

@end
