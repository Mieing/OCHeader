@class NSString, LarkMediaBaseObject;

@interface LarkSendMessageRequest : NSObject <LarkPrivateDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) LarkMediaBaseObject *mediaObject;

- (id)dataDict;
- (BOOL)valid;
- (void).cxx_destruct;

@end
