@class BaseRequest, NSString;

@interface GetTeenagerModePreBindGuardianInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *guardianUserName;
@property (nonatomic) unsigned int bindScene;
@property (retain, nonatomic) NSString *originalGuardianUserName;

+ (void)initialize;

@end
