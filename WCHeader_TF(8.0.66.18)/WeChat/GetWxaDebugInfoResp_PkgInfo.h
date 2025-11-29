@class NSString, NSMutableArray;

@interface GetWxaDebugInfoResp_PkgInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int packageType;
@property (retain, nonatomic) NSString *wxapkgMd5;
@property (nonatomic) unsigned int wxapkgSize;
@property (nonatomic) unsigned long long bufId;
@property (retain, nonatomic) NSMutableArray *separatedPluginList;

+ (void)initialize;

@end
