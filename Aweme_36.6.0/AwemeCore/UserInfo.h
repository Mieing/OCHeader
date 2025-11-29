@class NSString;

@interface UserInfo : NSObject

@property (copy, nonatomic) NSString *bizUid;
@property (copy, nonatomic) NSString *bizSecUid;
@property (nonatomic) long long epUid;

- (id)initWithBizUid:(id)a0 bizSecUid:(id)a1 epUid:(long long)a2;
- (void).cxx_destruct;

@end
