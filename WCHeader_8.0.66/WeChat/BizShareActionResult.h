@class NSNumber;

@interface BizShareActionResult : NSObject

@property (retain, nonatomic) NSNumber *actionType;
@property (retain, nonatomic) NSNumber *success;

+ (id)makeWithActionType:(id)a0 success:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
