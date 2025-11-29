@class NSString;

@interface SnsPostLaunchRequest : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *localId;

+ (id)makeWithUsername:(id)a0 localId:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
