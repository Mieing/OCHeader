@class NSString, NSDictionary;

@interface QQApiExtraServiceObject : QQApiObject

@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *openID;
@property (copy, nonatomic) NSString *toUin;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)objecWithOpenID:(id)a0 serviceID:(id)a1;

- (id)initWithOpenID:(id)a0 serviceID:(id)a1;
- (void).cxx_destruct;

@end
