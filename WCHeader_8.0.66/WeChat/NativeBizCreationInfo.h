@class NSNumber, NSString;

@interface NativeBizCreationInfo : NSObject

@property (retain, nonatomic) NSNumber *redPoint;
@property (copy, nonatomic) NSString *buffer;

+ (id)makeWithRedPoint:(id)a0 buffer:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
