@class NSString, NSNumber;

@interface NetworkInfo : NSObject

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSNumber *isFreeSimCard;
@property (retain, nonatomic) NSNumber *allowedMobileNet;

+ (id)makeWithType:(id)a0 isFreeSimCard:(id)a1 allowedMobileNet:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
