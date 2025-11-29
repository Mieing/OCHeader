@class NSString, NSDictionary;

@interface ADFeelGoodConfig : NSObject

@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *uName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)checkNunNull;
- (id)getBaseUserInfo;
- (id)checkQuestionParamsWithEventID:(id)a0 extraUserInfo:(id)a1;
- (id)webviewParamsWithTaskID:(id)a0 taskSetting:(id)a1 extraUserInfo:(id)a2;
- (void).cxx_destruct;
- (id)headerOrigin;

@end
