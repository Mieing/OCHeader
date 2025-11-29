@class NSNumber;

@interface BizImagePreviewActionPraiseInfo : NSObject

@property (retain, nonatomic) NSNumber *praiseStatus;

+ (id)makeWithPraiseStatus:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
