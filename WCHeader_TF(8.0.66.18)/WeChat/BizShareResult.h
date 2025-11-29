@class NSNumber;

@interface BizShareResult : NSObject

@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *successCount;

+ (id)makeWithTotalCount:(id)a0 successCount:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
