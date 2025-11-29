@class NSString;

@interface WXSubscribeMsgResp : BaseResp

@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *reserved;
@property (copy, nonatomic) NSString *openId;

- (void).cxx_destruct;

@end
