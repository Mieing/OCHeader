@class NSString, LSIMLynxConfigModel, NSDictionary;

@interface LSIMMessageLynxCellVM : LSIMMessageCardBaseCellVM

@property (copy, nonatomic) NSString *nativeCardUniqueId;
@property (retain, nonatomic) LSIMLynxConfigModel *lynxConfig;
@property (readonly, copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *preserveData;

- (void)handleMessage;
- (BOOL)hasSendMethod;
- (void).cxx_destruct;

@end
