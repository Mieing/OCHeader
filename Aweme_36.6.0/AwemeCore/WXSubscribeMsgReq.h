@class NSString;

@interface WXSubscribeMsgReq : BaseReq

@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *reserved;

- (void).cxx_destruct;

@end
