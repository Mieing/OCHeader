@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEEccsIMLoginParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *fpID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *pigeonCID;
@property (copy, nonatomic) NSString *httpDomain;
@property (copy, nonatomic) NSString *frontierDomain;
@property (copy, nonatomic) NSDictionary *wsCustomHeaders;
@property (copy, nonatomic) NSArray *inboxes;
@property (copy, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSNumber *service;
@property (retain, nonatomic) NSNumber *method;
@property (copy, nonatomic) NSArray *bizCustomMethods;
@property (copy, nonatomic) NSArray *filterMsgTypeSet;
@property (copy, nonatomic) NSDictionary *pullReadStateInboxToBizRoleMapper;
@property (copy, nonatomic) NSDictionary *pbHeaders;
@property (copy, nonatomic) NSDictionary *imHttpQuery;
@property (retain, nonatomic) NSNumber *sendConversationList;
@property (retain, nonatomic) NSNumber *doNotLogoutButCloseWsWhenLostHeartbeat;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
