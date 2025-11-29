@class NSString;
@protocol AWEECOMIMPaasConversationBridgeProtocol, AWEIMShareModelProtocol;

@interface AWEECOMIMMsgForwardCellModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *searchKey;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *pigeonShopID;
@property (copy, nonatomic) NSString *encodeShopID;
@property (retain, nonatomic) id<AWEECOMIMPaasConversationBridgeProtocol> shopConversation;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> friendConversation;

- (id)nameAttributedString;
- (void).cxx_destruct;

@end
