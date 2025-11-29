@class TIMXPBNSendUserActionResponseBody, NSArray, NSString;

@interface TIMXSendUserActionResponseWrapper : NSObject <TIMXOSendUserActionResponseProtocol>

@property (retain, nonatomic) TIMXPBNSendUserActionResponseBody *pbResponseBody;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSArray *actionsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWihtPBObj:(id)a0;
- (void).cxx_destruct;

@end
