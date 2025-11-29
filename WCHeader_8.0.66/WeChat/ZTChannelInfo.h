@class NSString;

@interface ZTChannelInfo : NSObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *packageid;
@property (copy, nonatomic) NSString *schannel;
@property (copy, nonatomic) NSString *sceneid;
@property (copy, nonatomic) NSString *scenename;
@property (copy, nonatomic) NSString *subscenename;
@property (copy, nonatomic) NSString *qq;
@property (copy, nonatomic) NSString *commid;
@property (copy, nonatomic) NSString *openid;

- (id)toDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
