@class NSString;

@interface BizRecFollowActionInfo : NSObject

@property (copy, nonatomic) NSString *username;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *articleUrl;

+ (id)makeWithUsername:(id)a0 scene:(long long)a1 articleUrl:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
