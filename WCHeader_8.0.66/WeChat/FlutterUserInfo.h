@class NSString;

@interface FlutterUserInfo : NSObject

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;

+ (id)makeWithUserName:(id)a0 nickName:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
