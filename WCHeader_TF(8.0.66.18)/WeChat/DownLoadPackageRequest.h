@class BaseRequest, Package;

@interface DownLoadPackageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) Package *package;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int len;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
