@class NSArray;

@interface AWEConcernSkylightSectionModel : NSObject

@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) NSArray *cellModels;

- (void)updateCellModels:(id)a0;
- (id)initWithCellType:(unsigned long long)a0 cellModels:(id)a1;
- (void).cxx_destruct;

@end
