@class NSString, NSDictionary;

@interface WXLaunchMiniProgramReq : BaseReq

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned long long miniProgramType;
@property (retain, nonatomic) NSString *extMsg;
@property (copy, nonatomic) NSDictionary *extDic;

+ (id)object;

- (void).cxx_destruct;

@end
