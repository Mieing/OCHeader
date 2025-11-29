@class NSString;

@interface WxaAppGetShareInfoResponse_WxaAppShareInfo_UpdatableMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *contentColor;
@property (retain, nonatomic) NSString *toastContent;
@property (retain, nonatomic) NSString *toastButtonWording;
@property (retain, nonatomic) NSString *remindWording;
@property (nonatomic) int updatePeroid;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *expiredSubscribeWording;

+ (void)initialize;

@end
