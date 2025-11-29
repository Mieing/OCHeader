@class NSString;

@interface WXSceneInternalMessage : NSObject

@property (retain, nonatomic) NSString *stateId;
@property (retain, nonatomic) NSString *stateToken;
@property (retain, nonatomic) NSString *stateUrl;
@property (retain, nonatomic) NSString *stateTitle;
@property (nonatomic) unsigned long long jumpType;
@property (retain, nonatomic) NSString *stateMiniProgramUsername;
@property (retain, nonatomic) NSString *stateMiniProgramPath;
@property (nonatomic) long long stateMiniProgramType;
@property (retain, nonatomic) NSString *stateChannelUserName;

- (void).cxx_destruct;

@end
