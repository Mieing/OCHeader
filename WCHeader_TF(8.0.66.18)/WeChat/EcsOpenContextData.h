@class EcsOpenContextData_LiteAppExtraData, NSString, EcsOpenContextData_WxaExtraData, NSData;

@interface EcsOpenContextData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *jsonParams;
@property (retain, nonatomic) NSData *bytesParams;
@property (retain, nonatomic) EcsOpenContextData_WxaExtraData *wxaExtraData;
@property (retain, nonatomic) EcsOpenContextData_LiteAppExtraData *liteAppExtraData;

+ (void)initialize;

@end
