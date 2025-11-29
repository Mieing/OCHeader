@class NSString;

@interface UserProfileLaunchRequest : NSObject

@property (copy, nonatomic) NSString *username;

+ (id)makeWithUsername:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
