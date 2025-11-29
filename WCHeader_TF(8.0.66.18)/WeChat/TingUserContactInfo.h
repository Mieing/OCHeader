@class NSString;

@interface TingUserContactInfo : NSObject

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *headUrl;
@property (copy, nonatomic) NSString *hashUsername;

+ (id)makeWithUserName:(id)a0 nickName:(id)a1 headUrl:(id)a2 hashUsername:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
