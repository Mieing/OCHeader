@class NSString, NewRevokeMsgRevokeContentModel;

@interface NewRevokeMsgContentModel : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NewRevokeMsgRevokeContentModel *revokemsgcontent;

+ (id)xmlAttributePropertylistForConfigTag:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
