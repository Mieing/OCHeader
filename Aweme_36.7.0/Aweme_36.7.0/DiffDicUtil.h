@class NSArray, DiffResult;

@interface DiffDicUtil : NSObject

@property (retain, nonatomic) NSArray *filterKeys;
@property (retain, nonatomic) DiffResult *result;

- (void)recursiveDiffWithDict1:(id)a0 dict2:(id)a1 andPath:(id)a2;
- (void)compareArrays:(id)a0 otherArray:(id)a1 withPath:(id)a2;
- (BOOL)isInFilterWithPath:(id)a0;
- (id)initWithFilterKeys:(id)a0;
- (void).cxx_destruct;

@end
