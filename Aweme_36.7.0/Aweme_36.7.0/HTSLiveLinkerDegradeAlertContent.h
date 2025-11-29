@class NSString, HTSLiveUser;

@interface HTSLiveLinkerDegradeAlertContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *degradeContent;

+ (id)descriptor;

@end
