@class TIMXPBNGetGroupManagerInfoResponseBody, NSString, NSError, TIMXPBNResponse;
@protocol TIMXOConversationGroupManagementModelProtocol;

@interface TIMXConversationGroupManagementOperationResponseWrapper : NSObject <TIMXOConversationGroupManagementOperationResponseProtocol>

@property (retain, nonatomic) TIMXPBNResponse *pbResponse;
@property (retain, nonatomic) TIMXPBNGetGroupManagerInfoResponseBody *groupInfoBody;
@property (readonly, nonatomic) int statusCode;
@property (readonly, copy, nonatomic) NSString *errorDesc;
@property (readonly, nonatomic) NSError *errorInBody;
@property (retain, nonatomic) id<TIMXOConversationGroupManagementModelProtocol> groupManagementModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
