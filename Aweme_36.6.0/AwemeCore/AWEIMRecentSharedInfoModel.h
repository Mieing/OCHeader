@class NSString;

@interface AWEIMRecentSharedInfoModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *cid;
@property (nonatomic) long long bizType;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDict:(id)a0;

@end
