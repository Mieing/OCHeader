@class NSString;

@interface WAMPLinkNode : MMObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned int debugModeType;
@property (nonatomic) unsigned int appVersion;
@property (copy, nonatomic) NSString *nickName;

- (void).cxx_destruct;

@end
