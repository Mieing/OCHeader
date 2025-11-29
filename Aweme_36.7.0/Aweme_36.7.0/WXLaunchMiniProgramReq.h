@class NSString, NSDictionary;

@interface WXLaunchMiniProgramReq : BaseReq

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long miniProgramType;
@property (copy, nonatomic) NSString *extMsg;
@property (copy, nonatomic) NSDictionary *extDic;

+ (id)object;

- (void).cxx_destruct;

@end
