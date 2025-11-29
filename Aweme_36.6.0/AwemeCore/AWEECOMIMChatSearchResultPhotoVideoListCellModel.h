@class NSString;
@protocol AWEECOMIMPaasMessageBridgeProtocol;

@interface AWEECOMIMChatSearchResultPhotoVideoListCellModel : NSObject <AWEECOMIMChatSerachListCellModelProtocol>

@property (retain, nonatomic) id<AWEECOMIMPaasMessageBridgeProtocol> msg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)otherTrackParams;
- (void).cxx_destruct;
- (long long)cellType;

@end
