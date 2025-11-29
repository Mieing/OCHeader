@class NSString;

@interface BizUserInfo : NSObject

@property (copy, nonatomic) NSString *bizUid;
@property (copy, nonatomic) NSString *bizSecUid;
@property (nonatomic) long long epUid;

- (id)initWithBizUid:(id)a0 epUid:(long long)a1;
- (void).cxx_destruct;

@end
