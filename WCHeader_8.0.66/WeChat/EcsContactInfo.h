@class NSString;

@interface EcsContactInfo : NSObject

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *userName;

+ (id)makeWithNickName:(id)a0 userName:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
