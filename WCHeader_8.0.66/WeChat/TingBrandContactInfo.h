@class NSString, NSNumber;

@interface TingBrandContactInfo : NSObject

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) NSNumber *isSubscribe;

+ (id)makeWithUsername:(id)a0 isSubscribe:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
