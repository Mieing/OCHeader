@class NSString;

@interface LinkWeAppJumpWrap : MMObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned int appState;
@property (nonatomic) BOOL isForbidSSignal;
@property (copy, nonatomic) NSString *shareKey;
@property (copy, nonatomic) NSString *chattoolUsername;
@property (nonatomic) BOOL isAgentTextStyle;

- (void).cxx_destruct;

@end
