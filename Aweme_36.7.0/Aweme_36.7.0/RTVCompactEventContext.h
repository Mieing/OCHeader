@class NSDictionary;

@interface RTVCompactEventContext : NSObject

@property (nonatomic) BOOL withOperation;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)contextWithOperation:(BOOL)a0;
+ (id)contextWithUserInfo:(id)a0;

- (void).cxx_destruct;

@end
