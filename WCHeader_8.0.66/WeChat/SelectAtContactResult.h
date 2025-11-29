@class NSString;

@interface SelectAtContactResult : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;

+ (id)makeWithUsername:(id)a0 nickname:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
