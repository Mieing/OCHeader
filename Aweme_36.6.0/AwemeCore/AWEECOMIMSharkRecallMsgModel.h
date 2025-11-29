@class NSString;

@interface AWEECOMIMSharkRecallMsgModel : AWEECOMIMBaseMsgModel <AWEECOMIMCellModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (id)initWithMessage:(id)a0;

@end
