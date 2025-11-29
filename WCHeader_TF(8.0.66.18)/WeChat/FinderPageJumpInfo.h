@class NSNumber, NSString;

@interface FinderPageJumpInfo : NSObject

@property (retain, nonatomic) NSNumber *finderUin;
@property (copy, nonatomic) NSString *finderUsername;

+ (id)makeWithFinderUin:(id)a0 finderUsername:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
