@class NSString, BDECPigeonUpdateMessage, NSNumber;

@interface AWEECOMIMPaasUpdateMessageNew : NSObject <AWEECOMIMPaasUpdateMessageProtocol>

@property (retain, nonatomic) BDECPigeonUpdateMessage *updateMessage;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *videoCoverUrl;
@property (retain, nonatomic) NSNumber *statusNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertToPigeonUpdateMessage;
- (void).cxx_destruct;

@end
