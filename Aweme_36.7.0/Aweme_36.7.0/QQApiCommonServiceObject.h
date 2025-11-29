@class NSString, NSDictionary;

@interface QQApiCommonServiceObject : QQApiObject

@property (copy, nonatomic) NSString *openID;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSDictionary *extendInfo;

+ (id)objecWithOpenID:(id)a0 serviceID:(id)a1 extendInfo:(id)a2;

- (id)initWithOpenID:(id)a0 serviceID:(id)a1 extendInfo:(id)a2;
- (void).cxx_destruct;

@end
