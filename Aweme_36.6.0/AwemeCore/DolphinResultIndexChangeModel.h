@class NSArray, NSObject;

@interface DolphinResultIndexChangeModel : NSObject

@property (nonatomic) long long op;
@property (retain, nonatomic) NSObject *opModel;
@property (retain, nonatomic) NSObject *originModel;
@property (copy, nonatomic) NSArray *rerankOldIndexes;
@property (copy, nonatomic) NSArray *rerankNewIndexes;

- (void).cxx_destruct;

@end
