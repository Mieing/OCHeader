@class NSString, NSDictionary;

@interface IESECActionLogNodeNetwork : IESECActionLogNodeBase

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *logID;

- (id)generateKey;
- (id)convertPath;
- (void).cxx_destruct;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)info;

@end
