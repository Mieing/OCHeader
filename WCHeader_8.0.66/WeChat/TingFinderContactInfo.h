@class NSString, NSNumber;

@interface TingFinderContactInfo : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) NSNumber *isFollow;

+ (id)makeWithUsername:(id)a0 nickname:(id)a1 headImageUrl:(id)a2 isFollow:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
