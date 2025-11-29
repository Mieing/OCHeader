@class NSString, NSDictionary, AWEShareTokenConfigModel;

@interface AWEShareTokenConfiguration : NSObject

@property (nonatomic) unsigned long long tokenType;
@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *shareTemplate;
@property (nonatomic) unsigned long long channelType;
@property (nonatomic) BOOL useNewTokenGenterateAPI;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long customShareTargetType;
@property (copy, nonatomic) NSString *customItemID;
@property (retain, nonatomic) AWEShareTokenConfigModel *textConfig;
@property (copy, nonatomic) NSDictionary *extraLogDict;
@property (nonatomic) BOOL downgradeWechat;

- (void).cxx_destruct;

@end
