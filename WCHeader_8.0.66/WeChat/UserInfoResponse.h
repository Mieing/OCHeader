@class NSString;

@interface UserInfoResponse : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *avatarPath;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *gender;
@property (nonatomic) BOOL isOpenIM;
@property (copy, nonatomic) NSString *subName;

+ (id)makeWithUsername:(id)a0 avatarPath:(id)a1 displayName:(id)a2 gender:(id)a3 isOpenIM:(BOOL)a4 subName:(id)a5;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
