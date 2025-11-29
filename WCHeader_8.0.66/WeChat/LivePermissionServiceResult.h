@class NSString;

@interface LivePermissionServiceResult : NSObject

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *message;

+ (id)makeWithSuccess:(BOOL)a0 message:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
