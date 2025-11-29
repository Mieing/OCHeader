@class NSDictionary;

@interface PuzzleHybridInstanceSampleInfo : NSObject

@property (copy, nonatomic) NSDictionary *jscObjectDic;
@property (copy, nonatomic) NSDictionary *cppObjectDic;
@property (copy, nonatomic) NSDictionary *ocObjectDic;

- (id)toDictinary;
- (void).cxx_destruct;

@end
