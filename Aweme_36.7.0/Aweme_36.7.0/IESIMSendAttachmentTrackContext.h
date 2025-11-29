@class NSString, NSDictionary;

@interface IESIMSendAttachmentTrackContext : NSObject <IESIMSendMsgFlowTrackProtocol>

@property (copy, nonatomic) NSString *resourceType;
@property (nonatomic) long long resourceSize;
@property (copy, nonatomic) NSString *resourceFrom;
@property (copy, nonatomic) NSString *paramsForActivity;
@property (copy, nonatomic) NSDictionary *sendContext;
@property (copy, nonatomic) NSString *userDefinedEnterMethod;
@property (copy, nonatomic) NSString *userDefinedEnterFrom;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isResendMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
